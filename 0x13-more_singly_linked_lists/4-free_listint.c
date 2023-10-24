#include "lists.h"
/**
 * free_listint - function frees linked list
 * @head: one to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *T;

	while (head)
	{
		T = head->next;
		free(head);
		head = T;
	}
}
