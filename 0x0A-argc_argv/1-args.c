/*#include "main.h"*/ 
#include <stdio.h>

/**
 * main - prints the nuumber of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
*/
int main (int argc, char *argv[])
{
    argc--;

    (void)argv;

    printf("%d\n", argc);

    return (0);
}