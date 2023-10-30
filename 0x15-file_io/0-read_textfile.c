#include "main.h"
/**
 * read_textfile - reads a textfile and outputs it
 * @filename: filename
 * @letters: num of letters to read and output
 * Return: num it could read and output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t n, y;
	char *buff;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	n = read(i, buff, letters);
	y = write(STDOUT_FILENO, buff, n);

	close(i);
	free(buff);

	return (y);
}
