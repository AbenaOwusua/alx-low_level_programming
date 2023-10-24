#include "lists.h"
/**
 * free_listint_safe - function frees list
 * @h: parameter of function
 * Return: length
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int d;
	listint_t *T;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			T = (*h)->next;
			free(*h);
			*h = T;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
