#include "main.h"
/**
 * _str_len(char *s) - function defination
 * @s: pointer to a string
 * Description: Compute the length of a string
 * Return: size of string
*/
int _str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _str_len(s + 1));
}
/**
 * string_nconcat(char *s1, char *s2, unsigned int n) - concatenates
 * two strings
 * @s1: pointer to string 1
 * @s2, pointer to string 2
 * @n: bytes of s2 to incude
 * Return: pointer to resultant string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int final_str_size, i, j;
	char *final_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _str_len(s1);
	s2_len = _str_len(s2);

	if (n >= s2_len)
		n = s2_len;

	final_str_size = s1_len + n + 1;
	final_str = malloc(final_str_size);

	if (final_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		final_str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		final_str[i] = s2[j];
		i++;
	}

	final_str[i] = '\0';

	return(final_str);
}
