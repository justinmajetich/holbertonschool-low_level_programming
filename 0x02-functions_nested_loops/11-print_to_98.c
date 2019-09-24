#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: number to be counted from
 *
 * Description: prints numbers from user input
 * to 98.
 */
void print_to_98(int n)
{
	
	if (n <= 98)
		for (; n <= 98; n++)
		{
			printf("%i", n);

			if (n != 98)
				printf(", ");
		}
	else
		for (; n >= 98; n--)
		{
			printf("%i", n);
			
			if (n != 98)
				printf(", ");

		}
		printf("\n");
}
