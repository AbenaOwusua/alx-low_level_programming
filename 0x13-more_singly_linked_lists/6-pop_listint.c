#include "lists.h"
/**
 * pop_listint - function deketes the head node
 * @head: parameter
 * Return: digit
 */
int pop_listint(listint_t **head)
{
	listint_t *T;
	int digit;

	if (!head || *head)
		return (0);
	digit = (*head)->n;
	T = (*head)->next;
	free(*head);
	*head = T;
	return (digit);
}
