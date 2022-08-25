#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth- a function that calculates the depth
 * of a binary tree
 * @tree: pointer to the root
 * Return: NULL if tree is empty
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			depth++;
			node = node->parent;
		}
	}
	return (depth);
}
