#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: singly
 * Return: number of el
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
		h = h->next;
	return (nodes);
}
