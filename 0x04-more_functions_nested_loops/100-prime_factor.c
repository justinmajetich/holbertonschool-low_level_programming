#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on Success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i;
	unsigned long prime_candidate;

	for (i = num - 1; i > 1; i--)
	{
		prime_candidate = i;

		if (num % prime_candidate == 0)
		{	
			printf("%lu\n", prime_candidate);
			return (0);
		}
	}
	return (1);
}
