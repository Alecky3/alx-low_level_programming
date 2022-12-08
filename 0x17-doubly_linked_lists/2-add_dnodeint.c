#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: new nodes data
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node;

	new_node = malloc(sizeof(struct dlistint_s));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;

	return (new_node);
}
