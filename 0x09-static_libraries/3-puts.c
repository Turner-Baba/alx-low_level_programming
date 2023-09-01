#include "main.h"
/**
 * _puts - print a string
 * @str: string to be printed
 * Return: string and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
