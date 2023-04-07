#include "lists.h"
/**
 * add_node_end - add new node at end.
 * @str: str
 * @head: head
 * Return: newNode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *lastNode = *head;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);

	if (!(newNode->str))
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;
	newNode->next = NULL;

	return (newNode);
}
