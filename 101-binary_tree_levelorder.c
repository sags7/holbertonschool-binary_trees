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
 * traverseLevel - executes func on every node on a given level
 * @tree: the tree to traverse
 * @func: the function to execute on every node
 * @level: the level in tree to traverse
 */
void traverseLevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		traverseLevel(tree->left, func, level - 1);
		traverseLevel(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - traverses a tree using level order
 * @tree: the root of the treee to traverse
 * @func: a function to execute on each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0, i = 0;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);

	for (i = 0; i <= height + 1; i++)
		traverseLevel(tree, func, i);
}
