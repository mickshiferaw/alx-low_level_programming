#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of li
 * @idx: the index of the list
 * @n: value of node
 * Return: address, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *current;
	listint_t *new;

	current = *head;
	if (idx != 0)
	{
		for (m = 0; m < idx - 1 && current != NULL; m++)
			current = current->next;
	}
	if (current == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
