#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			temp = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
