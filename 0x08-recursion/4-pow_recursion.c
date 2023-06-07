#include "main.h"
/**
 * int _pow_recursion(int x, int y) - computes the x power y
 * @x: base
 * @y: index
 * Return: power
*/
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
