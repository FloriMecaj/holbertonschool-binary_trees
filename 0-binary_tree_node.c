#include"binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_node -creates a new binary tree node
 * @parent: -points to the parent node
 * @value: -the value to be inserted into the node
 * Return: (newnode)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
