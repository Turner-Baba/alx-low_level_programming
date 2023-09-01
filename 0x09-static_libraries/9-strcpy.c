#include "main.h"
/**
 * *_strcpy - pointer to a char
 * @dest: string points to a char
 * @src: string points to a char
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
