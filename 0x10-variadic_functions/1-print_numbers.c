#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, ar;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		ar = va_arg(ptr, const unsigned int);
		printf("%d", ar);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
