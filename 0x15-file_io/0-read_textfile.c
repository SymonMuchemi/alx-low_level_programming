#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to the text file
 * @letters: number of letters to be read and printed
 * Return: number of letters read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytesRead, bytesWritten;
    char buffer[BUFFSIZE];

    fd = open(filename, O_RDONLY);

    if (fd < 0)
        return (0);
    
    bytesRead = read(fd, buffer, letters);

    if (bytesRead < 0)
        return (0);
    
    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

    if (bytesWritten < 0)
        return (0);

    close(fd);

    return (bytesRead);
}
