#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	if (*h == (*h)->next) /* only one node in the list */
	{
		free(*h);
		*h = NULL;
		count++;
		return (count);
	}

	count = free_listint_safe(&((*h)->next));
	count++;
	free(*h);
	*h = NULL;
	return (count);
}
