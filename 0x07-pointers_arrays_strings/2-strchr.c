#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @s: parameter of function
 * @c: parameter of function
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0' ; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
