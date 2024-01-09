#include"binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of a node
 * @parent: points to the parent node
 * @value: value to put in the node
 * Return: (newnode)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left)
	{
	new_node->left = parent->left;
	parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
