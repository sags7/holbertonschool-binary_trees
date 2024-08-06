#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - returns the depth of a node within a tree
 * @tree: the node to measure the depth
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
/**
 * binary_trees_ancestor - returns a pointer to the lowest common
 * ancestor between first and second nodes
 * @first: the first node
 * @second: te secon node
 * Return: a pointer to the common ancestor or NULL if fails
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t firstDepth, secondDepth;

	if (!first || !second)
		return (NULL);

	firstDepth = binary_tree_depth(first);
	secondDepth = binary_tree_depth(second);

	while (firstDepth > secondDepth)
	{
		first = first->parent;
		firstDepth--;
	}
	while (secondDepth-- > firstDepth)
	{
		second = second->parent;
		secondDepth--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
