#include "lists.h"
/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: pointer to list_t
 * Return: list_len
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
