#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @s: parameter of function
 * @b: parameter of function
 * @n: parameter of function
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
