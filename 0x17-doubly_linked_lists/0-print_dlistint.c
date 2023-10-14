#include "lists.h"
/**
 * print_dlistint - prints doubly
 * dlistint_t - number of node
 * @h: head pointer of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int number_of_node = 0;
if (h == NULL)
{
    return (number_of_node);
}
while (h->prev != NULL)
{
    h = h->prev;
};
while (h != NULL)
{
    printf("%d\n", h->n);
    number_of_node++;
    h = h->next;
}
return (number_of_node);
}
