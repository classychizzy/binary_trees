#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - a function that deletes a tree
 * @binary_tree_t *tree: the tree to be deleted
 * Return: NULL on success
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
