#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers
 *
 * Return: (0) for Success
 */
int main(void)
{
	int h;
	int i;
	int j;
	int k;
	int l;

	for (h = 48; h < 58; h++)
	{	
		for (i = 48; i < 58; i++)
		{
			for (j = 48; j < 58; j++)
			{	
				putchar(i);
				putchar(j);
				putchar(' ');
			}
		}	
	

		for (k = 48; k < 58; k++)
		{
			for (l = 48; l < 58; l++)
			{
				putchar(k);
				putchar(l);
				
				if (!(i == 48 && j == 47 && k == 48 && l == 48))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}	
	}
	putchar('\n');

	return (0);
}
