#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: parameter c
 * Return: returns 1 if c is lowercase, returns 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

