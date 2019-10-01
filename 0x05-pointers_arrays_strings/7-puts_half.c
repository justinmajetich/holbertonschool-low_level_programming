#include "holberton.h"

/**
 * puts_half - print second half of string
 * @str: string to print in half
 */
void puts_half(char *str)
{
	int i = 0, length = 0, half_pt;

	for (; str[i] != '\0'; i++)
		length++;

	if (length % 2 != 0)
		half_pt = (length + 1) / 2;
	else
		half_pt = length / 2;

	for (i = half_pt; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
