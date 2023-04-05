#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to pointer to the head node
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}

