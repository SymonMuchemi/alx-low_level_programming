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
