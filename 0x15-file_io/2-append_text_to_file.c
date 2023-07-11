#include "main.h"
/**
 * append_text_to_file - adds text to file
 * @filename: pointer to the file
 * @text_content: NULL terminated string to add at the 
 * end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    ssize_t byteWritten;
    int fd, len = 0;

    if (!filename)
        return (-1);

    if (text_content)
    {
        while(text_content[len])
        {
            len++;
        }
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    byteWritten = write(fd, text_content, len);

    if (fd == -1 || byteWritten == -1)
        return (-1);
    
    return (1);
}
