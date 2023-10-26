#include "main.h"
/**
 * binary_to_uint - it convert binary num to unsigned int
 * @b: a char pointer to string
 * Return: converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lent;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int digit = 0;
	unsigned int pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (lent = 0; b[lent] != '\0'; lent++)
		;
	if (lent == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (y = lent - 1; y > 0; y--)
			pow = pow * base;
		digit = digit + (pow * (b[x] - 48));
		lent--;
		pow = 1;
	}

	return (digit);
}
