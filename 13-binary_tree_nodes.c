#include"binary_trees.h"

/**
 * binary_tree_nodes -claculates the nodes with at least one child
 * @tree: -points to the root of the tree
 * Return: (nodes)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_conditioned_nodes = 0;
	size_t right_conditioned_nodes = 0;
	size_t nodes;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->left != NULL)
		left_conditioned_nodes = binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		right_conditioned_nodes = binary_tree_nodes(tree->right);
	nodes = left_conditioned_nodes + right_conditioned_nodes + 1;
	return (nodes);
}
