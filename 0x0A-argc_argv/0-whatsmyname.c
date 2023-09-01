#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: number of command line argument
 * @argv: an array containing the command line argument
 * Return: (0) success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
