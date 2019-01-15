#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary format of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("'%s' : '%s'", temp->key, temp->value);
			if (ht->array[i + 1] == NULL)
				break;
			printf(", ");
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
