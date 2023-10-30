#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the filename
 * @text_content: null string to add to the end of file
 * Return: (1) on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int x;
	int y;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (x = 0; text_content[x]; x++)
			;
		y = write(i, text_content, x);

		if (y == -1)
			return (-1);
	}
	close(i);
	return (1);
}
