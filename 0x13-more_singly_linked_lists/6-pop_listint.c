#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: head of li
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int m;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	m = temp->n;
	free(temp);
	return (m);
}
