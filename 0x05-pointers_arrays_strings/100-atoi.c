#include "holberton.h"
#include <limits.h>

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer on Success, 0 on Fail
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, digit, intg = 0, num_switch = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (s[i] - '0');

			if (intg > INT_MAX / 10 || intg * 10 > INT_MAX - digit)
				return (INT_MAX);
			else if (intg < 0 && (intg < INT_MIN / 10 || intg * 10 < INT_MIN - digit))
				return (INT_MIN);
			else
				intg = (intg * 10) + digit;

			if (sign == -1 && intg >= 0)
				intg *= -1;

			num_switch = 1;
		}
		if ((s[i] < '0' || s[i] > '9') && num_switch == 1)
			break;
	}
	if (intg == 0)
		return (0);
	else
		return (intg);
}
