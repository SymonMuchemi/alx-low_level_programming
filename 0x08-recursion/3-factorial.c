#include "main.h"
/**
 * int factorial(int n) - computes the factorial of a number
 * @n: the number parameter
 * Return: Nothing
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
