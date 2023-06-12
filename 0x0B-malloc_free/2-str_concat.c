#include "main.h"
/**
 * *str_concat(char *s1, char *s2) - concatenates two strings
 * @s1: first string
 * @s2: second string
*/
char *str_concat(char *s1, char *s2)
{
    char *result_string;
    int index;
    int size = _strlen(s1) + _strlen(s2) + 1;
    int concat_index = 0;
    
    if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
        
    result_string = malloc(size);
    if (result_string == NULL)
        return (NULL);
    
    for (index = 0; s1[index]; index++)
		result_string[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		result_string[concat_index++] = s2[index];
    
    return (result_string);    
}