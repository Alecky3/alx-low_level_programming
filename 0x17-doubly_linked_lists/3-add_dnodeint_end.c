#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: head of the list
 * @n: the new data to add
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node, *last;

	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	last = *head;
	if (last != NULL)
	 {
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	 else
	{
		*head = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
