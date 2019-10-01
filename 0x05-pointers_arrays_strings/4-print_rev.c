#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string to reverse/print
 */
void print_rev(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
