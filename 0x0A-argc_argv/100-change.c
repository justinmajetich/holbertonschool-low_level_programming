#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int _atoi(char *s);

/**
 * main - print minimum # of coins needed in change
 * @argc: number of arguments
 * @argv: argument(s)
 *
 * Return: 0 on Success, 1 on Error
 */
int main(int argc, char **argv)
{
	int cents, coin_cnt = 0;

	/* confirm proper arg count */
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	/* confirm arg is positive */
	if (*argv[1] == '-')
	{
		printf("0\n");
		return (1);
	}
	/* convert string to integer */
	cents = _atoi(argv[1]);
	while (cents)
	{
		/* computational blocks */
		if (cents % 25 == 0)
		{
			cents -= 25;
			coin_cnt++;
		}
		else if (cents % 10 == 0)
		{
			cents -= 10;
			coin_cnt++;
		}
		else if (cents % 5 == 0)
		{
			cents -= 5;
			coin_cnt++;
		}
		else if (cents % 2 == 0)
		{
			cents -= 2;
			coin_cnt++;
		}
		else
		{
			cents--;
			coin_cnt++;
		}
	}
	/* add any remaining single cent coins and print/return */
	printf("%d\n", (coin_cnt += cents));
	return (0);
}

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer on Success, 0 on Fail
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, digit, intg = 0, num_switch = 0;

	/* loop through string till null */
	for (; s[i] != '\0'; i++)
	{
		/* if signed, track sign */
		if (s[i] == '-')
			sign *= -1;
		/* allow if digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* convert char to int */
			digit = (s[i] - '0');

			/* match digit sign to integer sign */
			if (intg < 0)
				digit *= -1;
			/* over/underflow gaurds */
			if (intg > 0 && (intg > INT_MAX / 10 || intg * 10 > INT_MAX - digit))
				return (INT_MAX);
			if (intg < 0 && (intg < INT_MIN / 10 || (intg * 10 < INT_MIN - digit)))
				return (INT_MIN);
			/* shift current num up 1 place and add digit to tens place */
			intg = (intg * 10) + digit;

			/*
			 * if sign is neg and integer is currently pos,
			 * make integer neg (useful on first iteration of loop)
			 */
			if (sign == -1 && intg >= 0)
				intg *= -1;

			/* inside number*/
			num_switch = 1;
		}
		/* if inside number, and char is not number, no longer in number and break */
		if ((s[i] < '0' || s[i] > '9') && num_switch == 1)
			break;
	}
	/* returns, if conditional may be redundant TEST */
	if (intg == 0)
		return (0);
	else
		return (intg);
}
