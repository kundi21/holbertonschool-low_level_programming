#include "lists.h"
/**
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if(h->str)
			printf("[%d] %s\n", h -> len, h -> str);
		else
			printf("[0] (nil)\n");
		count ++;
		h = h -> next;
	}

return (count);
}
	
	
