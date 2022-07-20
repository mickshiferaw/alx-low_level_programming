#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: head of li
 * Return: size of the free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list = 0;
	listint_t *temp;
	int m;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		m = *h - (*h)->next;
		if (m > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			list++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list++;
			break;
		}
	}
	*h = NULL;
	return (list);
}
