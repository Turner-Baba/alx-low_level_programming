#include <stdio.h>

/**
 * main - Entry point
 * putchar: prints output
 * Return: always 0
 */

int main(void)
{
	char c;

	char s;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar (s);
	}
	puctchar('\n');
	return (0);
}
