#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer on Success, 0 on Fail
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, digit, integer = 0, num_switch = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (s[i] - '0');
			integer = (integer * 10) + digit;
			num_switch = 1;
		}
		if ((s[i] < '0' || s[i] > '9') && num_switch == 1)
			break;
	}

	if (sign < 0)
		integer *= -1;

	if (integer == 0)
		return (0);
	else
		return (integer);
}
