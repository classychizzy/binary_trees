#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left- a function that inserts a node as the left child
 * @parent: the parent node
 * @value: the value of the node
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->left = parent->left;
			new_node->right = NULL;
			new_node->parent = parent;
			new_node->n = value;
			if (parent->left != NULL)
			{
				parent->left->parent = new_node;
			}
			parent->left = new_node;
		}
	}

	return (new_node);

}
