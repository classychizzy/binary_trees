#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder- a function that uses inorder transversal method
 * on a tree
 * @tree: the tree to be transversed
 * @func: the function that handles the value of the transversed node
 * Return: NULL
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
