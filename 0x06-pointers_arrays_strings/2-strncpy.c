#include "main.h"
/**
 * _strncpy - function copies string
 * @dest: parameter of function
 * @src: parameter of function
 * @n: parameter of function
 * Return: real_dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *real_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (real_dest);
}
