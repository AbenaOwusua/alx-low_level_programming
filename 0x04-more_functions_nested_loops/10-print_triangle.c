#include "main.h"
/**
 * print_triangle - function prints triangle
 * @size: parameter of function
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
