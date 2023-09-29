#include "main.h"
/**
 * flipp_bits - function that returns the number of bits you would need to flip
 * @n: first number
 * @m: second number to flip
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int ct;

	result = n ^ m;
	for (ct = 0; result > 0)
	{
		if ((result & 1) == 1)
			ct++;
		result = result >> 1;
	}
	return (ct);
}
