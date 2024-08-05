#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - returns the depth of a node within a tree
 * @tree: the node to measure the depth
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
