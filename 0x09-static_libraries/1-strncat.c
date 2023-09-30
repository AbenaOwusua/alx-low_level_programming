#include "main.h"
/**
 * _strncat - function concatenates two strings too
 * @dest: parameter of function
 * @src: parameter of function
 * @n: parameter of function
 * Return: real_dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *real_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (real_dest);
}
