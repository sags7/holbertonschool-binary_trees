#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree from the root.
 * @tree: the root node of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
