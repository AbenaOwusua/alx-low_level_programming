#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function executes a function
 * @array: array to be executed
 * @size: size of array
 * @action: pointer to function to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;
	for (a = 0 ; a < size ; a++)
		action(array[a]);
}
