#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
*/
int main (int argc, char *argv[])
{
    if (argc)
    {
        printf("%s\n", argv[0]);
    }
}
