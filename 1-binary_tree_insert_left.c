#include"binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_insert_left -inserts a node as the left child of a node
 * @parent: -points to the parent node
 * @value: -value to put in the node
 * Return: (newnode)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL || parent == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
		parent->left = newnode;	
	}
	return (newnode);
}
