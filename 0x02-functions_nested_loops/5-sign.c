#include "main.h"
/**
 * print_sign -Entry point of my code
 * @n: parameter n
 * Return: return 1 for positive num, return 0 for negative num or retutn -1 if otherwise
 */

int print_sign(int n)
{
	if  (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(45);
	return (0);
	}
	else
	{
	_putchar(48);
	return (-1);
	}
}


