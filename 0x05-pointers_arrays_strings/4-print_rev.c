#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: string in reverse and a straight line
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i--; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
