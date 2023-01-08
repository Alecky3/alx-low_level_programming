#include "hash_tables.h"

/**
 * hash_key_key_djb2 - Hash function that implement djb2 algorithm.
 * @str: Key to aplied the transformation.
 * Return: hash_key_key key
 */
unsigned long int hash_key_key_djb2(const unsigned char *str)
{
	unsigned long int hash_key;
	int c;

	hash_key = 5381;
	while ((c = *str++))
	{
		hash_key = ((hash_key << 5) + hash_key) + c; 
	}
	return (hash_key);
}
