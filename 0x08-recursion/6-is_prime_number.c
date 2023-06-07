#include "main.h"
/**
 * int is_prime_number(int n) - checks if a number is
 *  prime or composite
 * @n: the number to be checked
 * Return: 1 -> prime, 0 -> composite
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (!check_factor(n, n / 2));
	}
}
/**
 * check_factor(int n, int fact) - check the factors of a
 * number, n
 * @n: the number
 * @fact: test factor
 * Return: 1 if found, 0 if not
*/
int check_factor(int n, int fact)
{
	if (fact <= 1)
	{
		return (0);
	}
	if (n % fact == 0)
	{
		return (1);
	}
	return (check_factor(n, fact - 1));
}
