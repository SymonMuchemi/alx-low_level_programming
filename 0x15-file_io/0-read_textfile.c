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
    char *buffer;

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
        return (0);

    if (filename == NULL)
        return (0);
    
    fd = open(filename, O_RDONLY);
    bytesRead = read(fd, buffer, letters);
    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

    if (bytesWritten == -1 || bytesRead == -1 || fd == -1)
        return (0);

    frea(buffer);
    close(fd);

    return (bytesWritten);
}
