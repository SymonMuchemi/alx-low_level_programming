#include "main.h"
/**
 * _strlen(char *s) - function defination
 * @s: pointer to a string
 * Description: Compute the length of a string
 * Return: size of string
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * char *_strdup(char *str) - returns a pointer to a 
 * newly allocated space in memory, which contains a 
 * copy of the string  given as a parameter.
 * @str: string to be copied
 * Return: pointer to new string
*/
char *_strdup(char *str)
{
    int str_length = _strlen(str);
    int i = 0;
    char *new_string;

    if (str_length == 0)
        return (NULL);
    
    else
    {
        new_string = malloc(str_length + 1);

        if (new_string == NULL)
        {
            return (NULL);
        }

        for (i = 0; i < str_length; i++)
        {
            new_string[i] = str[i];
        }
        new_string[i] = '\0';
    }
    return (new_string);
}