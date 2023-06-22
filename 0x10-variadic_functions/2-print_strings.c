#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a 
 * new line
 * @seperator: string to be printed between the strings
 * @n: numer of strings
 * Return: nothing 
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;
    char *str;

    va_list str_args;
    va_start(str_args, n);

    for(; i < n; i++)
    {
        str = va_arg(str_args, char *);
        if (str == NULL)
            str = "(nil)";
        /*Print seperator if it is not null*/
        if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%s", str);
    }
    va_end(str_args);
    printf("\n");
}