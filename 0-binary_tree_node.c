#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - creates a node for a binary tree
 * @parent: the parent of the node
 * @value: the data stored in the node
 * Return: a pointer to the node,or null on failure to create
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
