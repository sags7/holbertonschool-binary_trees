#include "binary_trees.h"

/**
 * tree_height - calculates the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree, or 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (!tree)
		return (0);

	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);

	return (1 + ((leftHeight <= rightHeight) ? rightHeight : leftHeight));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		leftHeight = tree_height(tree->left);

	if (tree->right)
		rightHeight = tree_height(tree->right);

	return (leftHeight - rightHeight);
}
