#include <stdio.h>

/**
* main - print lower alpha except "q" and "e"
*
* Return: 0
*/
int main(void)
	{
	char c;

	c = 'a';

	while (c < '{')
		{
		if (c != 'q' && c != 'e')
			{
			putchar(c);
			}
		c++;
		}

		putchar('\n');

	return (0);
	}
