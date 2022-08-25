#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder- a function that uses post order transversal
 * on a tree
 * @tree: the tree to be transversed
 * @func: the func that handles the value on each node
 * Return: NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
