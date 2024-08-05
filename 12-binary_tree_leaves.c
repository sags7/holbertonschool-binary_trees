#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - returns the amount of leaves in a tree
 * @tree: the root of the tree
 * Return: the amount of leaves on the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (leaves + 1);

	if (tree->left)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right)
		leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
