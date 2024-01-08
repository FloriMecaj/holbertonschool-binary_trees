#include"binary_trees.h"

/**
 * binary_tree_leaves -counts the number of the leaves in a binary tree
 * @tree: -points to the root of the tree
 * Return: (leaves)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;
	size_t leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		left_leaves = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		right_leaves = binary_tree_leaves(tree->right);
	leaves = left_leaves + right_leaves;
	return (leaves);
}
