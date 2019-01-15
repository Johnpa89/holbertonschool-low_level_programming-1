#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to hash table
 * @ht: hash table to update
 * @key: key
 * @value: value of key
 * Return: updated table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *temp_val = NULL;
	hash_node_t *temp = NULL;
	hash_node_t *new = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0 || key == NULL)
		return (0);
	temp_val = strdup(value);
	if (temp_val == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	/* Collision checker */
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_val;
			temp->value = strdup(value);
			free(temp_val);
			return (1);
		}
		temp = temp->next;	
	}

	/* If no collision, insert node */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = temp_val;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
