#include<stdio>

/**
 * main - Entry point of main function
 * Return: always 0
 */

int main(void)
{
	char h;

	h = 'a';
	while
		(h <= 'z')
		{
			if ((h != 'q' && h != 'e') && h <= 'z')
				putchar(h);
			h++;
		}
	putchar('\n');
	return (0);
}
