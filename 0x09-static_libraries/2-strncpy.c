#include "main.h"
/**
 * *_strncpy - a funtion that copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximumm no of elements to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

