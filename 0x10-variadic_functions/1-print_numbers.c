#include "variadic_functions.h"
/**
 * print_numbers - prints numbers 
 * @seperator: string to be printed between numbers
 * @n: number of intergers passed to the function
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i, num;

    va_list arg_list;
    va_start(arg_list, n);

    if (n == 0)
        return;

    for (i = 0; i < n; i++)
    {
        num = va_arg(arg_list, unsigned int);
        if (separator == NULL){
            printf("%d", num);

        }
        else
        {
            printf("%d%s", num, separator); 
        }
    }
    va_end(arg_list);
    printf("\n");
}