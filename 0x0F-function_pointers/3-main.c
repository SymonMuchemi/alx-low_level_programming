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

    while (argc == 4)
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        
        operation = get_op_func(argv[2]);

        result = operation(num1, num2);
        if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
        printf("Error\n");
        return (0);
    }
    printf("Error\n");
    exit(98);    
}
