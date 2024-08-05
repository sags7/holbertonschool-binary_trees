#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a node as the left child of another
 * @parent: the parent node
 * @value: the value contained in the node
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->left->parent = newNode;
	}
	else
	{
		parent->left = newNode;
	}

	return (newNode);
}
