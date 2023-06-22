#include "variadic_functions.h"
/**
 * print_all - prints anything with a specified format
 * @format: format to print in
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    char *str;
    char c;
    int num;
    float fnum;
    char *nil = "(nil)";

    va_list args;
    va_start(args, format);
    /*loop over each character in the format string*/
    while(format && format[i])
    {
         if (format[i] == 'c')
        {
            c = va_arg(args, char); /*Check*/
            printf("%c", c);
        }
    else if (format[i] == 'i')
        {
            num = va_arg(args, int);
            printf("%d", num);
        }
    else if (format[i] == 'f')
        {
            
        }
    else if (format[i] == 's')
    {
        /* Handle string argument */
    }
        i++;
    }
}