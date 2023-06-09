#include "hash_tables.h"
/**
* key_index - Gives you the index of a key.
* @key: is the Kay
* @size: the size of the array of the hash table.
*
* Return: The index of the key.
*
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
