#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Or -  a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *htab;
	unsigned long int x;

    htab = malloc(sizeof(hash_table_t));
    if (ht == NULL)
		return (NULL);

	htab->size = size;
	htab->array = malloc(sizeof(hash_node_t *) * size);
	if (htab->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;

	return (htab);
}
