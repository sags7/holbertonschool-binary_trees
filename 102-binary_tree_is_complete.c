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
/**
 * isComplete - recursively checks if a nodes index is higher than total nodes
 * @tree: the root node to check
 * @index: the starting index '0'
 * @nodes: the amount of nodes in tree
 * Return: 1 if tree is complete, 0 otherwise
 */
int isComplete(const binary_tree_t *tree, size_t index, size_t nodes)
{
	if (!tree)
		return (1);

	if (index >= nodes)
		return (0);

	return (isComplete(tree->left, 2 * index + 1, nodes)
			&& isComplete(tree->right, 2 * index + 2, nodes));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: the root node of the tree to check
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	nodes = binary_tree_size(tree);
	return (isComplete(tree, 0, nodes));
}
