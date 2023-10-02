#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: the file name
 * @letters: the number of letters it could read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nr = read(fd, buffer, letters);
	nw = write(STDOUT_FILENO, buffer, nr);

	close(fd);
	free(buffer);

	return (nw);
}
