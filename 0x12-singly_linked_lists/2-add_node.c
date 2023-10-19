#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function adds new node
 * @head: first parameter
 * @str: second parameter
 * Return: new string to be added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;
	unsigned int len = 0;

	while (str[len])
		len++;
	nNode = malloc(sizeof(list_t));
	if (!nNode)
		return (NULL);
	nNode->str = strdup(str);
	nNode->len = len;
	nNode->next = (*head);
	(*head) = nNode;

	return (*head);
}

