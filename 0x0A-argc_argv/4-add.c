#include "main.h"
/**
 * is_digit(char *str) -chaecks if a string reps a number
 * @str: number representation
 * Return: 0 on success
*/
bool is_digit(char *str)
{
    if (atoi(str) == 0)
    {
        return false;
    }
    else{
        return true;
    }
}
/**
 * main - adds numbers from command line arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
*/
int main (int argc, char *argv[])
{
    int i, sum;

    sum = 0;

    if (argc <= 1)
    {    
        printf("%d\n", argc - 1);
    }

    else if (argc == 2)
    {
        printf("%d\n", atoi(argv[1]));
    }    

    else 
    {
        for (i = 1; i < argc; i++)
        {
            if (is_digit(argv[i])){
                sum += atoi(argv[i]);
            }
            else{
                printf("Error");
            }
        }
        printf("%d\n", sum);
       
    }

    return (0);
}