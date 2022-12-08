#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
