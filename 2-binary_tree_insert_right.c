#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right- a function that inserts a node to the
 * right of a binary tree
 * @parent: the parent node
 * @value: the value in the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->left = NULL;
			new_node->right = parent->right;
			new_node->parent = parent;
			new_node->n = value;
			if (parent->right != NULL)
			{
				parent->right->parent = new_node;
			}
			parent->right = new_node;
		}
	}
	return (new_node);
}
