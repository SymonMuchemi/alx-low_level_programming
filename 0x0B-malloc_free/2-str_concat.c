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
 * *str_concat(char *s1, char *s2) - concatenates two strings
 * @s1: first string
 * @s2: second string
*/
char *str_concat(char *s1, char *s2)
{
    char *result_string;
    int index;
    int size;
    int concat_index = 0;
    
    if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
    
  size = _str_len(s1) + _str_len(s2) + 1;

  result_string = malloc(size);
  if (result_string == NULL)
      return (NULL);
  
  for (index = 0; s1[index]; index++)
  result_string[concat_index++] = s1[index];

  for (index = 0; s2[index]; index++)
  result_string[concat_index++] = s2[index];
  
  return (result_string);    
}