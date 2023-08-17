#include <stdio.h>
/**
 * main - sum fibonacci up to 4million
 *
 * Return: 0
 */

int main(void)
{
	long int n, x = 1, y = 2, sum = 0, tsum = 0;

	for (n = 0; n < 49; n++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tsum = tsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", tsum);
	return (0);
}
