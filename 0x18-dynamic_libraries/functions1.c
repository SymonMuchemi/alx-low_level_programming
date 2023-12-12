#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - tests c if lower or upper
 * @c: character is passed as integer
 * Description: c is the arguement as integer
 * Return: void
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
 * _isalpha - test if c is in alphabet
 * @c: the arguement to be tested, is integer
 * Description: tests is c is in alphabet
 * Return: void
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - function definition
 * @n: integer that will be tested
 * Description: convert and print number absolute
 * Return: void
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n);
	}
}

/**
 * _isupper - function definition
 * Description: tests case of c
 * @c: character to test
 * Return: 1 if upper 0 if not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
