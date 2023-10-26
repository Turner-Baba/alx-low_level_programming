#include "main.h"
/**
 * print_binary - prints binary rep of a number
 * @n: input decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	size_t b_number;

	if (n >> 1)
		print_binary(n >> 1);
	b_number = n & 1;
	_putchar(b_number + 48);
}
