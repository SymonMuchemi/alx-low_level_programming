#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: seperator char
 * @n: const var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printArgs;

	va_start(printArgs, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(printArgs, int));
	}
	va_end(printArgs);
	printf("\n");
}