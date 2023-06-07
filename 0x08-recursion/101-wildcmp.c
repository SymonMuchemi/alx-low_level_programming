#include "main.h"
/**
 * wildcmp - compares two strngs
 * @s1: pointer to str1
 * @s2: pointer to str2
 * Return: 1 if string are the same, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1))
			return (1);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
