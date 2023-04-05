#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the head node of the list
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;

	while (index > 0 && current_node != NULL)
	{
		current_node = current_node->next;
		index--;
	}
	return (current_node);
}

