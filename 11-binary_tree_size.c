#include"binary_trees.h"

/**
 * binary_tree_size - function to get the size of a binary tree
 * @tree: -points to the root of the tree
 * Return: (size)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;
	size_t size;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_nodes = binary_tree_size(tree->left);
	if (tree->right != NULL)
		right_nodes = binary_tree_size(tree->right);
	size = left_nodes + right_nodes + 1;
	return (size);
}
