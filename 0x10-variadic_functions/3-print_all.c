#include "variadic_functions.h"


/**
 * print_all - print all types of data followed by a new line
 * @format: the data types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int z = 0, x = 0;
	char *str;
	char *sep = ", ";

	va_start(args, format);
	while (format && format[z])
		z++;
	while (format && format[x])
	{
		if (x  == (z - 1))
		{
			sep = "";
		}
		switch (format[x])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", str, sep);
			break;
		}
		x++;
	}
	printf("\n");
	va_end(args);
}
