#include "holberton.h"
/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to check
 *
 * Return: 0 if prime, 1 if not
 *
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (((n == 2 || n % 2 != 0) && (n % 5 != 0)) && n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
