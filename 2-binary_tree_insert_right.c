#include"binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_insert_right -inserts a node as the right child of a node
 * @parent: -points to the parent node
 * @value: -value to put in the node
 * Return: (newnode)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL || parent == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	if (parent->right == NULL)
		parent->right = newnode;
	else
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
		parent->right = newnode;	
	}
	return (newnode);
}
