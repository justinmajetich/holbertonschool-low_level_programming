#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return 0 for Success
 */
int main(void)
	{
	int i;

	i = 48;
	while (i < 58)
		{
		putchar(i);
		i++;
		}

	i = 97;
	while (i < 103)
		{
		putchar(i);
		i++;
		}

	putchar('\n');

	return (0);
	}
