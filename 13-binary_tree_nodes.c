#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: the root of the tree
 * Return: the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left)
		count += binary_tree_nodes(tree->left);
	if (tree->right)
		count += binary_tree_nodes(tree->right);

	if (!tree->left && !tree->right)
		return (0);
	return (count + 1);
}
