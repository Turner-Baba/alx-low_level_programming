#include "main.h"
/**
 * *_strchr - a function that locates a character in a string
 * @s: string to search from
 * @c: charaacter to be located
 *
 * Return: if c is found,  a pointer to the first occurrence
 * if c is not found - Null
 */
char *_strchr(char *s, char c)
{
	int find;

	for (find = 0; s[find] >= '\0'; find++)
	{
		if (s[find] == c)
			return (s + find);
	}
	return ('\0');
}
