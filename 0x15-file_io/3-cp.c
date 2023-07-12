#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_buf - Create a buffer object
 * @filename: name of file
 * Return: pointer too created buffer or code 99
 */
char *create_buf(char *filename)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
    }

    return (buffer);
}
/**
 * close_file - close a file and handles any exception
 * that may occur
 * @fd: file descriptor
 * Return: Null
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main -  program that copies the content of 
 * a file to another file.
 * @argc: argument count 
 * @argv: argument vector 
 * Return: int 
 */
int main(int argc, char *argv[])
{
    int from_fd, to_fd;
    char *buff = create_buf(argv[2]);
    ssize_t bytesWritten, bytesRead;
    mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to"), exit(97);
    
    from_fd = open(argv[1], O_RDONLY);
    to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
    if (from_fd == -1)
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s", argv[1]), exit(98);
    if (to_fd == -1)
        dprintf(STDOUT_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
    bytesRead = 1;
    while(bytesRead)
    {
        bytesWritten = 
        bytesRead = read(from_fd, buff, 1024);
        if (bytesRead == -1)
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
        if (bytesRead > 0)
        {
            bytesWritten = write(to_fd, buff, bytesRead);
            if (bytesWritten != bytesRead || bytesWritten == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
        }
    }
    
    free(buff);
    close_file(to_fd);
    close_file(from_fd);

    return 0;
}
