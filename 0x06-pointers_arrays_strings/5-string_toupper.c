#include "main.h"
/**
 * *string_toupper - a function that changes all lowercase to uppercase letters
 * @str: string to be converted
 * Return: modified string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
