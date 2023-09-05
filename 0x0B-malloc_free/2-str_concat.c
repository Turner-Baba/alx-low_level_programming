#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j, k, t;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (t = 0; t <= j; t++)
	{
		p[k] = s2[t];
		k++;
	}
	return (p);
}
