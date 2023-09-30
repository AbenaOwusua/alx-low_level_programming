#include "main.h"
/**
 * _strcat - function concatenates two strings
 * @dest: parameter of function
 * @src: parameter of function
 * Return: real_dest
 */
char *_strcat(char *dest, char *src)
{
	char *real_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (real_dest);
}
