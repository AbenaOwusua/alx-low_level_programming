#include "lists.h"
/**
 * add_nodeint - function inserts new node
 * @head: the pointer to first node
 * @n: parameter 2
 * Return: if successful, pointer to the new node else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nEw;

	nEw = malloc(sizeof(listint_t));
	if (!nEw)
		return (NULL);
	nEw->n = n;
	nEw->next = *head;
	*head = nEw;
	return (nEw);
}
