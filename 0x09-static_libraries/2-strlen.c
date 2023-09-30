#include "main.h"
/**
 * _strlen - function returns length of string
 * @s: parameter of function
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
