#include "variadic_functions.h"
/**
 * sum_them_all - sums up all it arguments
 * @n: first know parameter
 * @...: variable arguments
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
