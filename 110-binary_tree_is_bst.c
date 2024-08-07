#include <limits.h>
#include "binary_trees.h"

/**
 * bstcheckrec - recursively checks if left child  is less than tree
 * and right child is more than tree
 * @tree: the tree to check if bst
 * @min: the min value the node can be and still be bst
 * @max: the max value the node can be and still be bst
 */
int bstCheckRec(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n >= max || tree->n <= min)
		return (0);
	return (bstCheckRec(tree->left, min, tree->n)
			&& bstCheckRec(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - returns 1 if tree is a valid binary search tree
 * @tree: the root of the tree to check
 * Return: 1 if tree is bst, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bstCheckRec(tree, INT_MIN, INT_MAX));
}
