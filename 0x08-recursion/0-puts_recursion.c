#include "main.h"
/**
 * _puts_recursion(char *s) - prints out a string followed by a new line
 * @s: pointer to a string
 * Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
