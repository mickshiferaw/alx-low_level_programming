#include "lists.h"
/**
 * _strlen - length
 * @s: A pointer to an int
 * Return: none
 */
int _strlen(const char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
/**
 * add_node - adds a new node
 * @head: pointer
 * @str:string
 * Return: address, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neww;

	neww = malloc(sizeof(list_t));

	if (neww == NULL)
		return (NULL);

	neww->str = strdup(str);
	neww->len = _strlen(str);

	neww->next = *head;
	*head = neww;

	return (*head);
}
