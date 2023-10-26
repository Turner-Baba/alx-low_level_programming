#include "main.h"
/**
 * flip_bits - Flips bits from one num to another and then returns flipped num
 * @n: initial number
 * @m: second num to flip
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int i;

	res = n ^ m;
	for (i = 0; res > 0;)
	{
		if ((res & 1) == 1)
			i++;
		res = res >> 1;
	}

	return (i);
}

