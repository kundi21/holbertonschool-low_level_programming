#include "lists.h"
/**
 * free_list -  function that frees a list_t list.
 * @head: head.
 */
void free_list(list_t *head)
{
	list_t *lista;

	while (head != NULL)
	{
		lista = head;
		head = head->next;
		free(lista->str);
		free(lista);
	}
}
