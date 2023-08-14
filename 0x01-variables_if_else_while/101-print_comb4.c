#include <stdio.h>
/**
 * main - Entry point of function
 * Return: always 0
 */

int main(void)
{
	int nm1, nm2, nm3;

	for (nm1 = 0; nm1 <= 9; nm1++)
	{
		for (nm2 = nm1 + 1; nm2 <= 9; nm2++)
		{
			for (nm3 = nm2 + 1; nm3 <= 9; nm3++)
			{
				putchar(nm1 + '0');
				putchar(nm2 + '0');
				putchar(nm3 + '0');
				if (nm1 < 7 || nm2 < 8 || nm3 < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
