#include "variadic_functions.h"
/**
 * sum_them_all - function calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (a = 0 ; a < n ; a++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
