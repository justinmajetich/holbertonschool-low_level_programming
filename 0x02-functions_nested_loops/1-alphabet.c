#include "holberton.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description: Using a for loop, the function to runs
 * through the lowercase alphabet printing each letter
 * with the _putchar function
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
