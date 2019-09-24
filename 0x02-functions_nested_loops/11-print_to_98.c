#include <stdlib.h>
#include "holberton.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: number to be counted from
 *
 * Description: prints numbers from user input
 * to 98.
 */
void print_to_98(int n)
{
	int n_abs;

	if (n <= 98)
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				n_abs = abs(n);
				if (n_abs / 10 != 0)
					_putchar((n_abs / 10) + '0');
				_putchar((n_abs % 10) + '0');
			}
			if (n >= 0)
			{
				if (n / 10 != 0)
					_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for (; n >= 98; n--)
		{
			if (n / 100 != 0)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
}
