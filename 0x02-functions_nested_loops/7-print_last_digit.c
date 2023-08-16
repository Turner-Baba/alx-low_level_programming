#include "main.h"
/**
 * print_last_digit - Entry point of my code
 * @a: paramter n
 * Return: the value of the last digit of a number
 */

int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last * '0');
	return (last);
}
