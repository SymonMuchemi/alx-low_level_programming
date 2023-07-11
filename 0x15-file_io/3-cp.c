#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * _cp - copies file contents of one file to another
 * @file_from: file to copy content from
 * @file_to: file to paste content to
 * Return: void
 */
void _cp(char *file_from, char *file_to)
{
    int from_fd, to_fd;
    char *buff[1024];
    ssize_t bytesWritten, bytesRead;

    if (!file_from)
        exit(98);
    
    from_fd = open(file_from, O_RDONLY);
    bytesRead = read(from_fd, buff, 1024);

    if (bytesRead == -1 || from_fd == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s", file_from);
        exit(98);
    }

    to_fd = open(file_to, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    bytesWritten = write(to_fd, buff, bytesRead);
    if (bytesWritten == -1 || to_fd == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to %s", file_from);
        exit(99);
    }
    if(close(from_fd) == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d", from_fd);
        exit(100);
    }

    if(close(to_fd) == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d", to_fd);
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
    if (argc != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to");
        exit(97);
    }
    
    _cp(argv[1], argv[2]);

    return 0;
}
