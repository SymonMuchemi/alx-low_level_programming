#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: NULL terminated string to 
 * write to the file
 * Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
    int fd, len = 0;
    ssize_t written;

    if (filename == NULL || text_content == NULL)
        return (-1);

    /*Get length of string*/
    while (text_content[len])
    {
        len++;
    }

    fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
    written = write(fd, text_content, len);

    if (fd == -1 || written == -1)
        return (-1);
    
    close(fd);
    return (1);
}
