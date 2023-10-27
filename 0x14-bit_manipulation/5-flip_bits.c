#include "main.h"
/**
 * flip_bits - function returns the number of bits i will need
 * to flip to get from one number to another
 * @n: parameter
 * @m: paraemter
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0 ; n || m ; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}
	return (numbits);
}
