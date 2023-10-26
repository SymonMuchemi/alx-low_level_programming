#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: a decimal number
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	signed long int bit_pos;
	int flag;
	char op;

	bit_pos = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	flag = 0;

	while (bit_pos >= 0)
	{
		op = (n >> bit_pos) & 1;

		if (flag == 1)
			_putchar(op + '0');

		else
		{
			if (op == 1)
			{
				_putchar(op + '0');
				flag = 1;
			}
		}

		bit_pos -= 1;
	}
}

