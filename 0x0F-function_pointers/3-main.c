#include "3-calc.h"
/**
 * main - performs simple operations
 * 
 * Return: 0
*/
int main(int argc, char const *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);
    char operand[] = argv[1];

    if ( argc != 3)
        return (-1);
    
    if (!checkForDigitsOnly(argv[0]))
        return (-1);
    
    if (!checkForDigitsOnly(argv[2]))
        return (-1);
    
    num1 = atoi(argv[0]);
    num2 = atoi(argv[2]);

    operation = get_op_func(operand);

    result = operation(num1, num2);

    return 0;
}
