#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - returns the amount of nodes in a tree
 * @tree: the root of the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size + 1);
}
