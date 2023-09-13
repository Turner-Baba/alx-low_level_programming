#include "function_pointers.h"
/**
 * array_iterator - a function that iterate through an array
 * @array: destination array
 * @size: size of an array
 * @action: a function pointer to the function array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
