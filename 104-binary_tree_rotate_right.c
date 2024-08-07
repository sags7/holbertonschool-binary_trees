#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a left rotation on a binary tree
 * @tree: the tree to rotate left
 * Return: a pointer to the new root of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x, *y;

	if (!tree || !tree->left)
		return (NULL);

	x = tree;
	y = tree->left;

	y->parent = x->parent;
	x->left = y->right;
	if (x->left)
		x->left->parent = x;
	x->parent = y;
	y->right = x;

	if (y->parent)
	{
		if (y->parent->left == x)
			y->parent->left = y;
		else
			y->parent->right = y;
	}

	return (y);
}
