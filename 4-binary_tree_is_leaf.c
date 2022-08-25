#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: the current node
 * Return: 1 if node is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int x = 0;

	if (node != NULL)
	{
		x = ((node->left == NULL) && (node->right == NULL
					) ? 1 : 0);
	}

	return (x);
}
