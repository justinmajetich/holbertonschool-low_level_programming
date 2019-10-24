#include "holberton.h"
#include <stdio.h>

int _strlen(char *s);
char *_cpystr(char *dest, char *src);

/**
 * infinite_add - add two numbers
 * @n1: number
 * @n2: number
 * @r: buffer used to store result
 * @size_r: buffer size
 *
 * Return: pointer to string on Success, 0 on buffer overflow
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, carry = 0; /* math vars */
	int b_cnt; /* counter vars */
	int len1 = (_strlen(n1) - 1); /* subtract 1 to condition as counter */
	int len2 = (_strlen(n2) - 1); /* "   " */

	char buffer[size_r]; /* temp buffer */

	/* convert and add numbers */
	for (b_cnt = 0; size_r >= 0; size_r--, b_cnt++)
	{
		/* find sum of nubers */
		if (len1 >= 0 && len2 >= 0)
			sum = (n1[len1--] - '0') + (n2[len2--] - '0');
		else if (len1 >= 0)
			sum = n1[len1--] - '0';
		else if (len2 >= 0)
			sum = n2[len2--] - '0';
		else
			sum = 0;

		printf("len1 = %d\nlen2 = %d\n", len1, len2);
		printf("sum = %d\n", sum);

		/* extract remainder, add carry, write backwards to buffer */
		buffer[b_cnt] = ((sum + carry) % 10) + '0';

		printf("carry = %d\n", carry);
		printf("buffer[%d] = %c\n", b_cnt, buffer[b_cnt]);

		/* extract carry */
		carry = (sum + carry) / 10;

		/* punctuate last digit with null-byte */
		if (len1 < 0 && len2 < 0 && carry == 0)
		{
			buffer[b_cnt + 1] = '\0';
			break;
		}
	}
	printf("buffer = %s\n", buffer);
	printf("length of sum + 1 = %d\n", (_strlen(buffer) + 1));

	/* check if r will store sum including null=byte */
	if (size_r < _strlen(buffer) + 1)
		return (0);

	/* copy buffer to r in reverse and return */
	return (_cpystr(r, buffer));
}

/**
 * _strlen - get length of string
 * @s: string to count
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _cpystr - copy strings
 * @dest: string to copy to
 * @src: string to copy
 *
 * Return: copied string
 */
char *_cpystr(char *dest, char *src)
{
	int i = 0, j;

	/* assign string len minus 1 to avoid null-byte */
	j = _strlen(src) - 1;

	while (j >= 0)
		dest[i++] = src[j--];
	dest[i] = '\0';

	printf("dest = %s\n", dest);
	return (dest);
}
