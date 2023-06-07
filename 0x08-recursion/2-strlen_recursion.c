#include "main.h"
/**
 * _strlen_recursion(char *s) - function defination
 * @s: pointer to a string
 * Description: Compute the lenghth of a string
 * Return: size of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
