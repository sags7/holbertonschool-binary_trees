#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - returns the size_t of a binary tree
 * @tree: pointer to the tree to measure
 * Return: the size_t of tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		leftHeight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rightHeight = binary_tree_height(tree->right) + 1;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
