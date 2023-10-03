#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function duplicates string using malloc
 * @str: parameter of function
 * Return: pointer that points to new string
 */
char *_strdup(char *str)
{
	char *p;
	int a, b;

	if (str == NULL)
		return (NULL);
	for (a = 0 ; str[a] != '\0' ; a++)
		;
	p = malloc(a * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);
	for (b = 0 ; b < a ; b++)
		p[b] = str[b];
	p[b] = '\0';
	return (p);
}
