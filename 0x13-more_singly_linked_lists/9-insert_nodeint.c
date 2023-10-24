#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts new node at needed position
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *T = *head;
	unsigned int a;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0 ; T && a < idx ; a++)
	{
		if (a == idx - 1)
		{
			new->next = T->next;
			T->next = new;
			return (new);
		}
		else
			T = T->next;
	}
	return (NULL);
}
