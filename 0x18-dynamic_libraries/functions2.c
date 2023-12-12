#include "main.h"

/**
 * _isdigit - function definition
 * Description: test if c is a digit
 * @c: the value to test
 * Return: 1-true, 0-false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
 * _puts - function definition
 * Description: prints a string
 * @str: the string pointer
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}

/**
 * _strcpy - function declaration
 * Description: copies a string
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	(void)src;

	return (dest);
}

/**
 * _atoi - function definition
 * Description: convert string to integer
 * @s: the string pointer
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int num_sign = 1;
	unsigned int digit = 0;

	do {
		if (*s == '-')
		{
			num_sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = (digit * 10) + (*s - '0');
		}
		else if (digit > 0)
		{
			break;
		}
	} while (*s++);
	return (digit * num_sign);
}



/**
 * *_strchr - function declaration
 * @s: the string
 * @c: the character
 * Return: a character
 */
char *_strchr(char *s, char c);

/**
 * *_strchr - function definition
 * @s: the string to be searched
 * @c: the character to find
 * Description: finds a character in a string
 * Return: a character value
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (0);
}


/**
 * _strspn - function declaration
 * @s: source string
 * @accept: prefix substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strspn - function definition
 * @s: the string to search
 * @accept: the prefic substring to be tested
 * Description: returns number of bytes in s
 * which only has bytes from accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}


/**
 * *_strpbrk - function declaration
 * @s: string to search
 * @accept: bytes to search
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strpbrk - function definition
 * @s: the string to be searched
 * @accept: bytes to search for
 * Description: searches for a string of a set of bytes
 * Return: pointer to matched byte or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int str_index;
	int sub_str_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (sub_str_index = 0; accept[sub_str_index] != '\0'; sub_str_index++)
		{
			if (s[str_index] == accept[sub_str_index])
			{
				return (s + str_index);
			}
		}
	}
	return (0);
}


/**
 * *_strstr - function declaration
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle);

/**
 * *_strstr - function definition
 * @haystack: that string that will be searched
 * @needle: the substring to search for
 * Description: search for needle in haystack
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int hay_index;
	int needle_index;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (hay_index = 0; haystack[hay_index] != '\0'; hay_index++)
	{
		if (haystack[hay_index] == needle[0])
		{
			for (needle_index = 0; needle[needle_index] != '\0'; needle_index++)
			{
				if (haystack[hay_index + needle_index] != needle[needle_index])
				{
					break;
				}
			}
			if (needle[needle_index] == '\0')
			{
				return (haystack + hay_index);
			}
		}
	}
	return ('\0');
}

/**
 * _strncpy - function declaration
 * @dest: second string
 * @src: first string
 * @n: number of times to copy
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - function definition
 * @dest: the second string
 * @src: the first string
 * @n: number of times to copy string
 * Description: copies a string
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
