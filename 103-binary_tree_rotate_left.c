#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: the tree to rotate left
 * Return: a pointer to the new root of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *x, *y;

	if (!tree || !tree->right)
		return (NULL);

	x = tree;
	y = tree->right;

	y->parent = x->parent;
	x->right = y->left;
	if (x->right)
		x->right->parent = x;
	x->parent = y;
	y->left = x;

	if (y->parent)
	{
		if (y->parent->right == x)
			y->parent->right = y;
		else
			y->parent->left = y;
	}

	return (y);
}
