#include "holberton.h"

/**
 * _puts - print string
 * @str: pointer to char
 * Description: function loops through
 * char array, printing each element
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
