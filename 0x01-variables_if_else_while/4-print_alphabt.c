#include<stdio>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char h;

	for (h = 'a' ; h <= 'z'; h++)
		if (h != 'e' && h != 'q')
			putchar (h);
	putchar('\n');
	return (0);
}
