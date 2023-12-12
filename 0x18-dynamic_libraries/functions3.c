#include "main.h"


/**
 * _strncat - function definition
 * @dest: second string value
 * @src: first string value
 * @n: number of time
 * Description: concatenates number of times
 * Return: character string value
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_index;
	int dest_index;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++)
	{
	}

	for (src_index = 0; src_index < n && src[src_index] != '\0'; src_index++)
	{
		dest[dest_index + src_index] = src[src_index];
	}
	dest[dest_index + src_index] = '\0';

	return (dest);
}

/**
 * _strcat - function declaration
 * @dest: second string
 * @src: first string
 * Return: charcter
 */

char *_strcat(char *dest, char *src);

/**
 * _strcat - function definition
 * Description: concatenates dest and src strings
 * @dest: second string
 * @src: first string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int dest_index;
	int src_index;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++)
	{}

	for (src_index = 0; src[src_index] != '\0'; src_index++)
	{
		dest[dest_index + src_index] = src[src_index];
	}
	dest[dest_index + src_index] = '\0';

	return (dest);
}


/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * *_memset - function declaration
 * @s: pointer to constant
 * @b: constant
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * *_memset - function definition
 * @s: pointer to a constant
 * @b: constant to be used
 * @n: maximum number of bytes
 * Description: fills a memory address with constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}

/**
 * *_memcpy - function declaration
 * @dest: destination address
 * @src: source address
 * @n: number of times
 * Return: sring
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_memcpy - function definition
 * @dest: the destination address
 * @src: the source address
 * @n: number of times to copy
 * Description: copies the src to dest n times
 * Return: copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}

