#include <stdio.h>

/**
 * main - Entry point
 * putchar: prints output
 * Return: always 0
 */

int main(void)
{
	char ch = 'x';
	char chA = 'X';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (chA = 'A'; chA <= 'Z'; chA++)
	{
		putchar (chA);
	}
	puctchar('\n');
	return (0);
}
