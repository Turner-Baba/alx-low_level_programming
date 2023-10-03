#include "main.h"
#include <stdio.h>
/**
 * error_handler - check if a file is open and handles error
 * @file_from: file to copy from
 * @file_to: destination file to copy to
 * @argv: argument vector
 * Return: void
 */
void error_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - to copy data from a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nchars, nw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
			error_handler(-1, 0, argv);
		nw = write(file_to, buffer, nchars);
		if (nw == -1)
			error_handler(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
