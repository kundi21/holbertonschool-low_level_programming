#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
