#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The letter to be compared
 *
 * Description: Using if... else, determines
 * whether or not argument c is lower or uppercase,
 * returning 1 or 0 respectively.
 * Return: 1 on Success (arg is lowercase)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
