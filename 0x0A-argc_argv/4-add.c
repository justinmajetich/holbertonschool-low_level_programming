#include "holberton.h"
#include <stdio.h>

int convert_string(char *string);

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument(s)
 *
 * Return: result if Success, 1 if Error
 */
int main(int argc, char **argv)
{
	int result = 0, i;

	/* make sure there are number args */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	/* loop through arguments */
	for (i = 1; i < argc; i++)
	{
		result += convert_string(*(argv + i));
	}
	printf("%d\n", result);
	return (0);
}

int convert_string(char *string)
{
 	int i, digit = 0, integer = 0;

	for (i = 0; *(string + i) != '\0'; i++)
	{
		if (*(string + i) < '0' || *(string + i) > '9')
			{
				printf("Error\n");
				return (1);
			}
		digit = *(string + i) - '0';
		integer = (integer * 10) + digit;
	}
	return (integer);
}
