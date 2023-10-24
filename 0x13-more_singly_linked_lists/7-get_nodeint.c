#include "lists.h"
/**
 * get_nodeint_at_index - function returns nth node
 * @head: parameter
 * @index: parameter
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *T = head;
	unsigned int a = 0;

	while (T && a < index)
	{
		T = T->next;
		a++;
	}
	return (T ? T : NULL);
}
