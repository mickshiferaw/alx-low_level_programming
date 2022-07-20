#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head of li
 */
void free_listint2(listint_t **head)
{
	listint_t *nextt;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nextt = (*head)->nextt;
		free(*head);
		*head = nextt;
	}
}
