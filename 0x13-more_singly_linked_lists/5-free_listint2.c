#include "lists.h"

/**
 * free_listint2 - This frees a listint_t list and sets the head to NULL
 * @head: points to the head_node of the list
 */
void free_listint2(listint_t **head)
{
	istint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
