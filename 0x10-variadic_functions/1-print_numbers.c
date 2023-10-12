#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers given as parameters
 * @separator: the string to be printed between numbers
 * @n: the number of the integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);

	for (a = 0 ; a < n ; a++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && a == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
