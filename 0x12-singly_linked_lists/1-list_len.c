#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function returns number of elements in a linked list
 * @h: parameter
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
