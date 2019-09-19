#include <stdlib.h>
#include <time.h>
#include <limits.h>

/**
* main - Identify var value in relation to zero, print
*
* Return: (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
