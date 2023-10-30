#include "main.h"
/**
 * create_file - Creates a file
 * @filename: filename
 * @text_content: null string to wrtie to
 * Return: (1) 0n successs
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int nlt;
	int n;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nlt = 0; text_content[nlt]; nlt++)
		;
	n = write(i, text_content, nlt);

	if (n == -1)
		return (-1);
	close(i);

	return (1);
}
