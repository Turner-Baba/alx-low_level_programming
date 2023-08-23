#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a = 0;

	for (i = 0; s1[i] != '\0' && a == 0; i++)
	{
		a = s1[i] - s2[i];
	}

	return (a);
}
