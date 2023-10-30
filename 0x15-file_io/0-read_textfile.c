#include "main.h"

/**
 * read_textfile - reads a textfile and prints out to the POSIX std out
 * @filename: the name of the file
 * @letters: the number of letter to be read
 * Return: the numer of letter read and printed or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytesRead, bytesWritten;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytesRead = read(fd, buf, letters);
	if (bytesRead == -1)
	{
		free(buf);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buf, bytesRead);
	free(buf);

	if (close(fd) == -1)
	{
		return (0);
	}
	if (bytesRead != bytesWritten)
	{
		return (0);
	}
	return (bytesWritten);
}
