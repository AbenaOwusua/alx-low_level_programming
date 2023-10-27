#include "main.h"
/**
 * clear_bit - fucntion sets the value of a bit to 0 at an index
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 if it worked else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
