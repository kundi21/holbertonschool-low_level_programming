#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head
 * @index: index
 * Return: pointer to nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current && index > 0)
	{
		current = current->next;
		index--;
	}

	return ((index == 0) ? current : NULL);
}
