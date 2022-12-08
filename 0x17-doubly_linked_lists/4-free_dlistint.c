#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 * Return: void
 */
void free_dlistint( struct dlistint_s *head)
{
	 struct dlistint_s *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
