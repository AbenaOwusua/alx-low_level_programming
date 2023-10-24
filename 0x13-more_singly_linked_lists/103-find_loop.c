#include "lists.h"
/**
 * find_listint_loop - function finds the loop
 * @head: parameter
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Fast, Slow = head;

	if (!head)
		return (NULL);
	while (Slow && Fast && Fast->next)
	{
		Fast = Fast->next->next;
		Slow = Slow->next;

		if (Fast == Slow)
		{
			Slow = head;
			while (Slow != Fast)
			{
				Slow = Slow->next;
				Fast = Fast->next;
			}
			return (Fast);
		}
	}
	return (NULL);
}
