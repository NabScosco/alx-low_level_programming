#include "lists.h"

/**
 * print_listint - This Prints all the elements of a listint_t list.
 * @h: Is a pointer to the head of the list.
 *
 * Return: This returns the number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count ++;
		 h = h->next;
	}
	return (node_count);
}
