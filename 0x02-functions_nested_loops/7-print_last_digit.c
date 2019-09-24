#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 * @n: number from which to extract last digit
 *
 * Description: Determine last digit of n by
 * isolating remainder of n / 10.
 * Return: extracted last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last digit = -n % 10;

		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;

		_putchar(last_digit + '0');
		return (last_digit);
	}
}
