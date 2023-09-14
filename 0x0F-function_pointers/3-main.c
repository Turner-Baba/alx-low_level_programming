#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs calculator functions
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: results of execution
 */
int main(int argc, char *argv[])
{
	char *op; /* operator */
	int num1, num2; /* declaration */

	if (argc != 4) /* if argc is wrong */
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd argument */
	num1 = atoi(argv[1]); /* first number input */
	op = (argv[2]); /* operator input */
	num2 = atoi(argv[3]); /* second number input */

	/* if operator not in operator list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if user tries to divide or perform modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print result of operator */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
