#include "main.h"
/**
 * rev_string - a function that reverses string
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;

	char tp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		tp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tp;
	}
}
