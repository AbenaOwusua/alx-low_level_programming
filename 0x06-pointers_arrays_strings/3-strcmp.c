#include "main.h"
/**
 * _strcmp - function compares strings
 * @s1: parameter of function
 * @s2: parameter of function
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
