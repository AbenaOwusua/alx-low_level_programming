#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function adds a new node of a list
 * @head: parameter 1
 * @str: parameter 2
 * Return: Address of new element if successful else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *old = *head;
	list_t *nNode;
	unsigned int len = 0;

	while (str[len])
		len++;
	nNode = malloc(sizeof(list_t));
	if (!nNode)
		return (NULL);
	nNode->str = strdup(str);
	nNode->len = len;
	nNode->next = NULL;

	if (*head == NULL)
	{
		*head = nNode;
		return (nNode);
	}
	while (old->next)
		old = old->next;
	old->next = nNode;
	return (nNode);
}

