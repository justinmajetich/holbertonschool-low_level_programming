#include "holberton.h"
/**
 * print_binary - print binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int i, digit, flag = 0;

	if (n == 0)
		_putchar('0');

	for (i = 31; i >= 0; i--)
	{
		digit = n >> i;
		if (digit & 1)
		{
			_putchar('1');
			flag = 1;
		}
		if (!(digit & 1) && flag)
			_putchar('0');
	}
}
