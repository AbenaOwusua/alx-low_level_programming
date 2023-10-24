#include "lists.h"
/**
 * free_listint2 - function frees linked list
 * @head: parameter
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *T;

	if (head == NULL)
		return;

	while (*head)
	{
		T = (*head)->next;
		free(*head);
		*head = T;
	}
	*head = NULL;
}
