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
/**
 * binary_tree_uncle - returns a pointer to the uncle of a node
 * @node: the node whose uncle we want a pointer to
 * Return: pointer to the uncle of node, or NULL if it fails
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
