#include "main.h"
/**
 * _puts - function prints string
 * @str: parameter of function
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
