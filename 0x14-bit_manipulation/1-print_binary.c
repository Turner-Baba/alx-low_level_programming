#include "main.h"
/**
 * print_b - prints the binary representation of a number
 * @n: decimal input
 * Return: void
 */
void print_b(unsigned long int n)
{
	if (n == 0)
		return;
	print_b(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_b(n);
	}
}
