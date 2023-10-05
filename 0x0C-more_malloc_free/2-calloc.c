#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function allocates memory to array using malloc
 * @nmemb: parameter of function
 * @size: parameter of function
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		*((char *)(a) + i) = 0;
	}
	return (a);
}
