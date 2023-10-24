#include "lists.h"
/**
 * listint_len - function returns number of elements of linked list
 * @h: linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}
	return (digit);
}
