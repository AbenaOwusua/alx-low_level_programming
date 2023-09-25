#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function prints sum of diagonals
 * @a: parameter of function
 * @size: parameter of function
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, size1;
	unsigned int sumdiag1, sumdiag2;

	size1 = 0;
	sumdiag1 = 0;
	sumdiag2 = 0;
	size1 = (size * size) - 1;
	for (b = 0 ; b <= size1 ; b = b + (size + 1))
	{
		sumdiag1 = sumdiag1 + a[b];
	}
	for (b = (size - 1) ; b < size1 ; b = b + (size - 1))
	{
		sumdiag2 = sumdiag2 + a[b];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}

