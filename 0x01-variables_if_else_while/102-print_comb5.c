#include <stdio.h>
/**
 * main - Entry point of function
 * Return: always 0
 */

int main(void)
{
	int nm1, nm2;

	for (nm1 = 0; nm1 <= 99; nm1++)
	{
		for (nm2 = nm1 + 1; nm2 <= 99; nm2++)
		{
			putchar((nm1 / 10) + '0');
			putchar((nm1 % 10) + '0');
			putchar(' ');
			putchar((nm2 / 10) + '0');
			putchar((nm2 % 10) + '0');

			if (nm1 < 98 || nm2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
