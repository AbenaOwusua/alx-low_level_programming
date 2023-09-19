#include <stdio.h>
/**
 * print_array - function prints elements of an array
 * @a: parameter of function
 * @n: parameter of function
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
