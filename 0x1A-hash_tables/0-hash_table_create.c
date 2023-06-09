#include"hash_tables.h"
/**
 * hash_table_create -Function that creates a new hash table
 * @size:The size of the array
 * Return:On success : A pointer to the hash table
 *     - On Failure : NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;
	unsigned long int i;

	my_hash_table = malloc(sizeof(hash_table_t));

	if (my_hash_table == NULL)
		return (NULL);

	my_hash_table->size = size;
	my_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (my_hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		my_hash_table->array[i] = NULL;
	}
	return (my_hash_table);
}
