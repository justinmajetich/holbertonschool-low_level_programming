#include "holberton.h"

/**
 * _strlen - returns string length
 * @s: string to measure
 *
 * Description: returns string length by looping
 * through array and incrementing length counter
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
