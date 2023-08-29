#include "main.h"
/**
 * *_memcpy - a function that copies memory area
 * @dest: destination memory to copy to
 * @src: source memory to copy from
 * @n: characters to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
