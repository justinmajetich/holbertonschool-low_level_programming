#include "3-calc.h"

/**
 * main - perform calculater operations
 * @argc: number of arguments
 * @argv: argument(s)
 *
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*f)(int, int);

	char *op = argv[2];

	/* check for correct arg number */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* check for proper operator */
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	/* check for zero division */
	if ((*op == '/' || *op == '%') && (num1 == 0 || num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* select operation */
	f = get_op_func(op);

	/* print result */
	printf("%d\n", f(num1, num2));

	return (0);
}
