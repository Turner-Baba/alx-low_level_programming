#include "main.h"
/**
 * _isalpha - Entry point of my code
 * @c: - parameter c
 * Return: return 1 if c is a letter or return 0 if otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

