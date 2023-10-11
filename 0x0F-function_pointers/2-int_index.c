#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer comparing the function
 *
 * Return: the index of the first element where
 * cmp fucntion does not return 0 or -1 if a match is not found
 * or the size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0 ; a < size ; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
