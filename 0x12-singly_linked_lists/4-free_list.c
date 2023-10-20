#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function frees a list
 * @head: list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *old, *next;

	old = head;

	while (old)
	{
		next = old->next;
		free(old->str);
		free(old);
		old = next;
	}
}
