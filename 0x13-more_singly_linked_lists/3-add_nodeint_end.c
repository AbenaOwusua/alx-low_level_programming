#include "lists.h"
/**
 * add_nodeint_end - function adds node to the end of the linked list
 * @head: parameter 1
 * @n: parameter 2
 * Return: if successful, new node else, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nEw;
	listint_t *T = *head;

	nEw = malloc(sizeof(listint_t));
	if (!nEw)
		return (NULL);
	nEw->n = n;
	nEw->next = NULL;

	if (*head == NULL)
	{
		*head = nEw;
		return (nEw);
	}
	while (T->next)
		T = T->next;
	T->next = nEw;
	return (nEw);
}
