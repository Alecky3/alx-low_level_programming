#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: The singly linked list.
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t noOfElems;

	noOfElems = 0;
	while (h != NULL)
	{
		h = h->next;
		noOfElems++;
	}
	return (noOfElems);
}
