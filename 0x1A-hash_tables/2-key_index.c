#include "hash_tables.h"

/**
 * key_inde - function that generates a distributed index
 * according to a given hash
 *
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_inde(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
