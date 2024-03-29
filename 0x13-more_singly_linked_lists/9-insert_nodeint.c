#include "lists.h"
/**
 * insert_nodeint_at_index - This Inserts a new node at a given position.
 * @head: points to a pointer to the first node in the listint_t list.
 * @idx: where index of new node should be added. Indices start at 0.
 * @n: Integer value to be stored in the new node.
 * Return: If memory allocation fails or head is NULL, returns NULL.
 * Otherwise, returns the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (!head)
		return (NULL);

	if (idx != 0)
	{
		current = *head;

		for (i = 0; i < idx - 1 && current; i++)
			current = current->next;

		if (!current)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}
