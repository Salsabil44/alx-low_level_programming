#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int y;
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (y = 0; y < ht->size; y++)
	{
		tmp1 = ht->array[y];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
