#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: points to hash table to add or update the key/value.
 * @key: The key - can't be an empty string.
 * @value: Value associated with key.
 *
 * Return: On failure - 0.On Success - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *temp_val = NULL;
	hash_node_t *temp = NULL, *new = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	temp_val = strdup(value);
	if (!temp_val)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	/* checks for a collision */
	temp = ht->array[index];
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
	/* If no collision exists, insert a node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = temp_val;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
