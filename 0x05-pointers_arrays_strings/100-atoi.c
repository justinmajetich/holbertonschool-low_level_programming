#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer on Success, 0 on Fail
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, digit, integer = 0;

	printf("Initial string: %s\n", s);

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (s[i] - '0');
			integer = (integer * 10) + digit;
		}
	}

	if (sign < 0)
		integer *= -1;

	if (integer == 0)
		return (0);
	else
		return (integer);
}
