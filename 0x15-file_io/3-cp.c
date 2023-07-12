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
 * _cp - copies file contents of one file to another
 * @file_from: file to copy content from
 * @file_to: file to paste content to
 * Return: void
 */
void _cp(char *file_from, char *file_to)
{
    int from_fd, to_fd;
    char *buff = create_buf(file_to);
    ssize_t bytesWritten, bytesRead;

    if (file_from == NULL)
        exit(98);
    
    from_fd = open(file_from, O_RDONLY);
    bytesRead = read(from_fd, buff, 1024);

    if (bytesRead == -1 || from_fd == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s", file_from);
        exit(98);
    }

    to_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    bytesWritten = write(to_fd, buff, bytesRead);
    if (bytesWritten == -1 || to_fd == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to %s", file_from);
        exit(99);
    }
    
    free(buff);
    close_file(to_fd);
    close_file(from_fd);
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
    if (argc != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to");
        exit(97);
    }
    
    _cp(argv[1], argv[2]);

    return 0;
}
