#include "main.h"
/**
 * b_print - prints binary rep of a number
 * @n: input
 * Return: void
 */
void b_print(unsigned int n)
{
	if (n == 0)
		return;
	b_print(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints binary rep of a number
 * @n: input decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	else
	{
		b_print(n);
	}
}
