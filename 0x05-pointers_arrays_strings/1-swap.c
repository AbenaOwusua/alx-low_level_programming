#include "main.h"
/**
 * swap_int - function swaps the values of two integers
 * @a: first parameter of function
 * @b: second parameter of function
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
