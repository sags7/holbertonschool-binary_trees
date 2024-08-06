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
/**
 * checkPerfect - recursively checks the nodes to see it they're perfect
 * @tree: the node to check
 * @height: the depth of the tree
 * @level: the current level of the node
 * Return: 1 if tree is perfect, 0 otherwise
 */
int checkPerfect(const binary_tree_t *tree, int height, int level)
{
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	if (tree->left)
		if (!checkPerfect(tree->left, height, level + 1))
			return (0);
	if (tree->right)
		if (!checkPerfect(tree->right, height, level + 1))
			return (0);
	if (!tree->left && !tree->right)
		if (height != level)
			return (0);
	return (1);
}
/**
 * binary_tree_is_perfect - returns 1 if the tree is perfect
 * @tree: the root of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	return (checkPerfect(tree, height, 0));
}
