#include "binary_trees.h"
/**
 * binary_tree_is_root - returns 1 if node is a root, 0 otherwise
 * @node: node to check if its a  root
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
