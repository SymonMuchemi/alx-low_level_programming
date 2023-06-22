#include "3-calc.h"

/**
 * ops - holds all functions
*/
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
/**
 * get_op_func - selects the correct function to perform the 
 * operation asked by the user
 * @s: operand
 * Return: pointer to coresspondind function
*/
int (*get_op_func(char *s))(int, int)
{
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (strcmp(ops[i].op, s) == 0)
            return ops[i].f;
        
        i++;
    }
    printf("Error\n");
    exit(99);
}