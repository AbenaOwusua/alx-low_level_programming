#include "main.h"
/**
 * reverse_array - function reverses content of an array
 * @a: parameter of function
 * @n: parameter of function
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;
	int temp;

	while (begin > end)
	{
		temp = a[begin];
		a[begin] = a[end];
		a[end] = temp;
		begin++;
		end--;
	}
}
