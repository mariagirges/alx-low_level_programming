#include "hash_tables.h"
/**
 * hash_table_t *hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return:  pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh;
	unsigned long int i;

	hsh = malloc(sizeof(hash_table_t));
	if (hsh == NULL)
		return (NULL);

	hsh->size = size;
	hsh->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hsh>array[i] = NULL;

	return (hsh);
}
