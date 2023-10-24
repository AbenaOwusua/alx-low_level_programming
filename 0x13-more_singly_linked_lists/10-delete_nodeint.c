#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes node
 * @head: the pointer to the first element
 * @index: this is the node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *T = *head;
	listint_t *rec = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(T);
		return (1);
	}
	while (a < index - 1)
	{
		if (!T || !(T->next))
			return (-1);
		T = T->next;
		a++;
	}
	rec = T->next;
	T->next = rec->next;
	free(rec);
	return (1);
}
