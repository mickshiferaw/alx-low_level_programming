#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of li
 * @index: index of the node
 * Return: NULL if node doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; m < index; m++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
