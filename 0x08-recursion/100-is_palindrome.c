#include "main.h"
/**
 * get_str_length(char *s) -gets the lentgh of a string
 * @s: pointer to a string
 * Return: lenght of string
*/
int get_str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_str_length(s + 1));
}
/**
 * palindrome_helper - is_palendrome() helper
 * @start: beggining of the string
 * @end: end of string
 * Return: 1 if start >= end, 0 if not
*/
int palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (palindrome_helper(start + 1, end - 1));
}
/**
 * is_palindrome(char *s) - checks if a string is a palindrome
 * @s: ponter to string
 * Return: 1 if true, 0 if false
*/
int is_palindrome(char *s)
{
	int length = get_str_length(s);

	return (palindrome_helper(s, s + length - 1));
}
