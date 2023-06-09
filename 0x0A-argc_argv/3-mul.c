#include "main.h"
/**
 * main - multiplies two command line argments
 * @argc:  argument count
 * @argv: argument vector
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int mul;
	
	if (argc != 3)
		printf("Error\n");
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
