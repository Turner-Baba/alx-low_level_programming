#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if big endian and 0 if litle endian
 */
int get_endianness(void)
{
	int x = 1;
	int big_lit;

	big_lit = (int) (((char *)&x)[0]);
	return (big_lit);
}
