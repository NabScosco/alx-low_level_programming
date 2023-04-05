#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to pointer to the head node of the linked list.
 * Return: the head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int n;

	if (*head == NULL)
		return (0);

	temporary = *head;

	n = temporary->n;
	*head = (*head)->next;
	free(temporary);
	return (n);
}
