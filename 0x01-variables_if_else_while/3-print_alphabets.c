#include <stdio.h>

/**
* main - print lower and upper alphabet
*
* Return: 0
*/
int main(void)
	{
	char c;

	c = 'a';

	while (c < 123)
		{
		putchar(c);
		c++;
		}

	c = 'A';

	while (c < 91)
		{
		putchar(c);
		c++;
		}

	putchar('\n');

	return (0);
	}
