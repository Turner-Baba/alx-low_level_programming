#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 * @str: initial atring
 *
 * Return: a pointer to the memory allocated
 */
char *_strdup(char *str)
{
	size_t i, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	p = (char *) malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}

