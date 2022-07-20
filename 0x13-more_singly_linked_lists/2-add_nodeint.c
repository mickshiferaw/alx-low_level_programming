#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of li
 * @n: int
 * Return: address, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neww;

	neww = *head;
	neww = malloc(sizeof(listint_t));
	if (neww == NULL)
		return (NULL);
	neww->n = n;
	neww->next = *head;
	*head = neww;
	return (neww);
}
