#include "lists.h"
/**
 *  print_listint - function prints all elements of the linked list
 *  @h: the linked list
 *  Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digit++;
		h = h->next;
	}
	return (digit);
}
