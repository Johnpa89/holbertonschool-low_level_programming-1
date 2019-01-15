#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL, *next_temp = NULL;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		next_temp = ht->array[i];
		while (temp)
		{
			temp = next_temp;
			next_temp = next_temp->next;
			if (temp->key != NULL)
				free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
