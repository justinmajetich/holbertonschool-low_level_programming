#include <stdio.h>
#include <stdlib.h>

int main(int, char **);

/**
 * _helper - print opcode of calling function
 * @n_bytes: number of bytes to print
 */
void _helper(int n_bytes)
{
	int i = 0;

	/* check if num is negative */
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *cptr = (unsigned char *)&main;

	/* increment ptr through main, printing first n_byte mem addresses */
	while (i++ < n_bytes)
	{
		printf("%02x ", cptr[i]);
		cptr++;
	}
	printf("\n");
}

/**
 * main - print opcodes of main
 * @argc: argument count
 * @argv: argument(s)
 *
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	/* check argument count */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* convert arg to int and send to helper */
	_helper(atoi(argv[1]));

	return (0);
}
