#include <stdio.h>

/**
 * main - Entry point
 * putchar: prints output
 * Return: always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar (c);
	}
	puctchar('\n');
	return (0);
}
