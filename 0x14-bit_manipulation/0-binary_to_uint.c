#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - fnction converts the binary to an unsigned int
 * @b: parameter
 * Return: sum
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, expo;
	int length;

	if (b == NULL)
		return (0);
	for (length = 0 ; b[length] ; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}
	for (expo = 1, sum = 0, length-- ; length >= 0 ; length--, expo *= 2)
	{
		if (b[length] == '1')
			sum += expo;
	}
	return (sum);
}
