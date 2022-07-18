#include "lists.h"
/**
 * free_list -  free's a list
 * @head: pointer
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *temm;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temm = head->next;
		free(head->str);
		free(head);
		head = temm;
	}

	free(head->str);
	free(head);
}
