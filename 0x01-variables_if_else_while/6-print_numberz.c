#include <stdio.h>

/**
  * main - print single digits of base 10
  *
  * Return: 0 if Success
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
	putchar('\n');

	return (0);
	}
