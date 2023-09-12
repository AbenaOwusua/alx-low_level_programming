#include "main.h"
/**
 * print_last_digit - the function prints the last digit
 *@p: parameter of the function
 * Return: j
 */
int print_last_digit(int p)
{
	int j;

	j = p % 10;
	if (p < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}

