#include "3-calc.h"
/**
 * main - performs simple funcs
 * 
 * Return: 0
*/
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*func)(int, int);

    if (argc == 4)
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        
        func = get_op_func(argv[2]);

        result = func(num1, num2);
        if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
        printf("%d\n", result);
        return (0);
    }
    printf("Error\n");
    exit(98);    
}
