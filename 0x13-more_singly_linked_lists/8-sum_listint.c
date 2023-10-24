#include "lists.h"
/**
 * sum_listint - function returns sum of all data
 * @head: parameter
 * Return: total
 */
int sum_listint(listint_t *head)
{
	listint_t *T = head;
	int total = 0;

	while (T)
	{
		total += T->n;
		T = T->next;
	}
	return (total);
}
