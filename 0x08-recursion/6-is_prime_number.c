#include "main.h"
/**
 * prime_operator - calculates prime number
 * @i: number
 * @j: iterator
 * Return: 0
 */
int prime_operator(int i, int j)
{
	if (i <= 1 || (i != j && i % j == 0))
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	return (prime_operator(i, j + 1));
}
/**
 * is_prime_number - a function that returns if its a prime number
 * @n: input integer
 * Return: 1 0r 0
 */
int is_prime_number(int n)
{
	return (prime_operator(n, 2));
}
