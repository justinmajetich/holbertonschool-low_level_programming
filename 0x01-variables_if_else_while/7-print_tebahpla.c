#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: 0 if Success
 */
int main(void)
	{
	int i;

	i = 122;
	while (i > 96)
		{
		putchar(i);
		i--;
		}
	putchar('\n');

	return (0);
	}
