#include "hash_tables.h"

/**
 * hash_djb2 - calculates the hash value using the djb2 algorithm
 * @str: the input string to hash
 * Return: the computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int a;

	while ((a = *str++))
	{
		hash = ((hash << 5) + hash) + a; /* hash * 33 + a */
	}
	return (hash);
}
