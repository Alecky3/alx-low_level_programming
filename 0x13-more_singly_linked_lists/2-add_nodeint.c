#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element or NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
