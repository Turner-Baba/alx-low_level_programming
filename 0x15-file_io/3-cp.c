#include "main.h"
#include <stdio.h>

/**
 * _errorhandler - checks and handles error in a opened file
 * @file_from: source file
 * @file_to: destination file
 * @argv: argument vector
 * Return: (void)
 */
void _errorhandler(int file_from, int file_to, char *argv[])
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
 * main - copy data from one file to another
 * @argv: argument vector
 * @argc: argument count
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t n, ch;
	char  buffs[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_errorhandler(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buffs, 1024);
		if (n == -1)
			_errorhandler(-1, 0, argv);
		ch = write(file_to, buffs, n);

		if (ch == -1)
			_errorhandler(0, -1, argv);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
