#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian else 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	int little_big;

	little_big = (int) (((char *)&i)[0]);
	return (little_big);
}
