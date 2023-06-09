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
	hash_node_t *new;
	char *add_val;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	add_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = add_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(add_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = add_val;
	new->next = ht->array[j];
	ht->array[j] = new;

	return (1);
}
