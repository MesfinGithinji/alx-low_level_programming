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
	char *my_val;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	my_val = strdup(value);
	if (my_val == NULL)
		return (0);

	i = key_i((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = my_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(my_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = my_val;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
