#include<stdio>

/**
 * main - Entry point of main function
 * Return: always 0
 */

int main(void)
{
	char ch = 'x';

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
