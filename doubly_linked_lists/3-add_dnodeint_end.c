#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list.
 * @head: pointer to a pointer to head
 * @n: n
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *aux;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	aux = *head;

	while (aux->next)
		aux = aux->next;

	aux->next = newNode;
	newNode->prev = aux;

	return (newNode);
}
