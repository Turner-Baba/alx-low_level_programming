#include "main.h"
/**
 * sqrt_operator - function that returns square root
 * @i: number
 * @j: iterator
 * Return: square root
 */
int sqrt_operator(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sqrt_operator(i, j + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{ 
	return (sqrt_operator(n, 0));
}
