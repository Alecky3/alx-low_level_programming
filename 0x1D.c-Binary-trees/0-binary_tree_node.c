#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the newly created node
 * @value: value of the new node
 * Return: the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (parent->left == NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	else
		newNode->left = NULL;

	return (newNode);
}
