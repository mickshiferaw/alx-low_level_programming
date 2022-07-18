#include "lists.h"

/**
 * _strlen - length(str)
 * @s: A pointer to an int
 * Return: none
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end -  adds a new node at the end
 * @head: pointer
 * @str: str
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *neww, *last_nodee = *head;

	neww = malloc(sizeof(list_t));


	if (neww == NULL)
		return (NULL);

	neww->str = strdup(str);
	neww->len = _strlen(str);
	neww->next = NULL;

	if (*head == NULL)
	{
		*head = neww;
		return (*head);
	}
	while (last_nodee->next != NULL)
		last_nodee = last_nodee->next;

	last_nodee->next = neww;
	return (*head);
}
