#include "hash_tables.h"
/**
 * hash_table_get - gets a value from the hash table.
 * @ht: The hash table.
 * @key: key.
 * Return: The value,else  NULL if the operation fails.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_key;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index_key = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index_key];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
