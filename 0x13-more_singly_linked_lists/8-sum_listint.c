#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: head of li
 * Return: 0 or sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
