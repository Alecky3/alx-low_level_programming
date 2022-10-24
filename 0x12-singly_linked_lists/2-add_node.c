#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * of list_t list.
 * @head: The head of the linked list.
 * @str: The string to store in the list.
 * Return: The address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t noOfChars;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (noOfChars = 0; str[noOfChars]; noOfChars++)
		;

	new->len = noOfChars;
	new->next = *head;
	*head = new;

	return (*head);
}
