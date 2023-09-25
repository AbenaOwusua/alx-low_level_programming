#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: parameter of function
 * @src: parameter of function
 * @n: parameter of function
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i ; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
