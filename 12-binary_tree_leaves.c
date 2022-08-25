#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves- a function that counts leave in a binarytree
 * @tree: pointer to the root
 * Return: NULL if pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
