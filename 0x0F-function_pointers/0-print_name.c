#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function prints name
 * @name: name to be printed
 * @f: pointer pointing to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

