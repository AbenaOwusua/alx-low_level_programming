#include "lists.h"
/**
 * print_listint_safe - function prints a linked list
 * @head: parameter
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *Tn = NULL;
	const listint_t *Ln = NULL;
	size_t count = 0;
	size_t new;

	Tn = head;
	while (Tn)
	{
		printf("[%p} %d\n", (void *)Tn, Tn->n);
		count++;
		Tn = Tn->next;
		Ln = head;
		new = 0;
		while (new < count)
		{
			if (Tn == Ln)
			{
				printf("-> [%p] %d\n", (void *)Tn, Tn->n);
				return (count);
			}
			Ln = Ln->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
