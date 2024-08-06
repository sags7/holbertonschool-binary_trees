#include "binary_trees.h"

/**
 * binary_tree_is_full - returns one if tree is full
 * @tree: the tree to check
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isFull = 1;

	if (!tree)
		return (0);

	if (tree->left)
		if (!(isFull = binary_tree_is_full(tree->left)))
			return (0);

	if (tree->right)
		if (!(isFull = binary_tree_is_full(tree->right)))
			return (0);

	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		isFull = 0;

	return (isFull);
}
