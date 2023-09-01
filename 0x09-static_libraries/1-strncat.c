#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: destinaatio string
 * @src: source string
 * @n: elements to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest, i;

	for (length_dest = 0; dest[length_dest] != '\0'; length_dest++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[length_dest + i] = src[i];
	}

	return (dest);
}
