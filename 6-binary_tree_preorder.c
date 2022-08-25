#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder- a function that transverse a tree
 * using preorder
 * @tree: the tree that is transversed
 * @func: a pointer to the function for each node
 * Return: NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
