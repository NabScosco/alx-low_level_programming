#include "lists.h"

/**
 * free_listint - Fuction frees a listint_t list
 * @head: points to the head node
 * Return: A void function
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
