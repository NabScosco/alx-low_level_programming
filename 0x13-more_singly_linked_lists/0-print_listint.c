#include "lists.h"

/**
 * print_listint - This Prints all the elements of a listint_t list.
 * @h: Is a pointer to the head of the list.
 *
 * Return: This returns the number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num_count = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		num_count++;
	}
	return (num_count);
}
