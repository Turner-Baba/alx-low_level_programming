#include<stdio.h>

/**
 * main - Entry point of function
 * Return: always 0
 */

int main(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
	{
		putchar('0' + nm);
		if (nm < 0)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
