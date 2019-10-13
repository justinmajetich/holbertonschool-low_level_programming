#include "holberton.h"
#include <stdio.h>

int convert_string(char **string);

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument(s)
 *
 * Return: 0 on Success, 1 on Fail
 */
int main(int argc, char **argv)
{
	int num1 = convert_string(argv[1]);
	int nums = convert_string(argv[2]);

	if (argc == 2)
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}

int convert_string(char *string)
{
	int digit = 0, result = 0, cnt = 0;

	while (string[cnt--])
	{
		/* convert ascii val to int */
		digit = string[cnt] - '0';
		/* times result up a place and add new digit */
		result = (result * 10) + digit;
	}
	return (result);
}
