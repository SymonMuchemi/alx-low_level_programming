#include "function_pointers.h"
/**
 * print_name - uses function pointer to print out 
 *  an name
 * @name: pointer to name string
 * @f: funtion pointer
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
    if (f == NULL)
        return;
        
    f(name);
}