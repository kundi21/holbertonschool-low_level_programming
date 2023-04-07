#include "lists.h"
/**
 * add_node - add new node at beginning.
 * @str: str
 * @head: head
 * Return: newNode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);

	if (!(newNode->str))
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
