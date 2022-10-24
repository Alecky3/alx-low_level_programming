#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: The head of the linked list.
 * @str: The string to store in the list.
 * Return: The address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t noChars;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (noChars = 0; str[noChars]; noChars++)
		;

	new->len = noChars;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
