#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of li
 * @index: the index that should be deleted
 * Return: 1 or -1 depending success or failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *current;
	listint_t *next;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (m = 0; m < (index - 1); m++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
