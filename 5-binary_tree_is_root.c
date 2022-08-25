#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_root -a function that checks if a node is root
 * @node: the queried node
 * Return: 1 if it is the root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node != NULL) && (node->parent == NULL))
		return (1);
	else
		return (0);
}
