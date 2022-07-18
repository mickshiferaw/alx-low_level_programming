#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: head of lin lst
 * Return:  number elements of linked list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (counter);
}
