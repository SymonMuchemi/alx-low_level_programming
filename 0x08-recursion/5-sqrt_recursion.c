#include "main.h"
/**
 * int _sqrt_recursion(int n) - finds the square root of n
 * @n: The number
 * Return: The sqrt of n or -1
*/
int _sqrt_recursion(int n)
{
	int test_root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_root(n, test_root));
	}
}
/**
 * fnd_root -finds the root of a number
 * @num: the number to check root for
 * @root: root to verufy
 * Return: root or -1
*/
int find_root(int num, int root)
{
	if (root * root == num)
		return (root);

	else if (root * root > num)
	{
		return (-1);
	}
	else
	{
		return (find_root(num, root++));
	}
}
