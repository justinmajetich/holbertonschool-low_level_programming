#include "holberton.h"
/**
 * flip_bits - determine how many bit flips needed to convert number
 * @n: starting number
 * @m: target number
 *
 * Return: number of flips necessary
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long mask = 1;
	unsigned int n_bit, m_bit, count = 0;

	for (; n || m; n >>= 1, m >>= 1)
	{
		/* store current n and m bits in variables */
		(n & mask) ? (n_bit = 1) : (n_bit = 0);
		(m & mask) ? (m_bit = 1) : (m_bit = 0);

		/* if bits don't match, flip required; count */
		if (n_bit != m_bit)
			count++;
	}
	return (count);
}
