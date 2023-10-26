#include "main.h"
/**
 * set_bit - function sets the value of a bit to 1 at an index
 * @n: parameter 1
 * @index: parameter 2
 * Return: if successful 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = (*n | a);
	return (1);
}
