#include "main.h"
/**
 * strlen_recursion - gets the length of a string
 * @s: string
 * Return: length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}
/**
 * compare_string - compares strings
 * @s: string
 * @left: minimal iterator
 * @right: biggest iterator
 * Return: an int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindromes
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, strlen_recursion(s) - 1));
}
