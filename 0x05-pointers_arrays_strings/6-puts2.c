#include "holberton.h"

/**
 * puts2 - prints alternating characters
 * @str: string to be manipulated
 */
void puts2(char *str)
{
	int i, length;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	for (i = 0; i <= length - 1; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
