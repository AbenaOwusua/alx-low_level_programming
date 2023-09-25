#include "main.h"
/**
 * _strpbrk - function searches a string
 * @s: parameter of function
 * @accept: parameter of function
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0 ; *(s + a) ; a++)
	{
		for (b = 0 ; *(accept + b) ; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
		if (*(accept + b) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
