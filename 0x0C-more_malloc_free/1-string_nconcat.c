#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - function calculates and returns length
 * @string: parameter to be calculated for
 * Return: length
 */
int _strlen(char *string)
{
	int a;

	for (a = 0 ; string[a] != '\0' ; a++)
		;
	return (a);
}
/**
 * string_nconcat - function concatenates two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concatenate from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, length, a, j;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	length = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
		return (NULL);
	for (a = 0 ; s1[a] != '\0' ; a++)
		ptr[a] = s1[a];
	for (j = 0 ; j < num ; j++)
		ptr[a + j] = s2[j];
	ptr[a + j] = '\0';
	return (ptr);
}


