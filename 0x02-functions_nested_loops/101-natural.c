#include <stdio.h>
/**
 * main - Entry point
 * Return: (0)
 */

int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 5 == 0) || (n % 3 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
