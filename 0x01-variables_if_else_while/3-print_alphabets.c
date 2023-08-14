#include <stdio.h>

/**
 * main - Entry point
 * putchar: prints output
 * Return: always 0
 */

int main(void)
{
	char n;

	for (n = 0; n < 26; n++)
	{
		putchar('a' + n);
	}

	for (n = 0; n < 26; n++)
	{
		putchar('A' + n);
	}

	putchar('\n');
	return (0);
}
