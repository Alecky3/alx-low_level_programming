#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of elemnts
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
        while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		count += 1;
	}

	return (count);
}
