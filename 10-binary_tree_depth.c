#include"binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node
 * @tree: points to a root node
 * Return: (depth)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ancestors = 0;
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	ancestors = binary_tree_depth(tree->parent);
	depth = ancestors + 1;
	return (depth);
}
