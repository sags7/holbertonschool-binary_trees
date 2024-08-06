#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - returns a pointer to node's sibling
 * @node: the node to find the sibiling of
 * Return: a pointer to the sibling or NULL if it fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return
		(node->parent->left == node ? node->parent->right : node->parent->left);
}
