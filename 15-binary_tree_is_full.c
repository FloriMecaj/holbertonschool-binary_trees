#include"binary_trees.h"

/*
 * binary_tree_is_full - hgjvhbadv
 * @tree: fgvhbjn
 * Return: agjvh
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) && (tree->left != NULL && tree->right == NULL))
		return (0);
    if (tree->left != NULL)
        binary_tree_is_full(tree->left);
    if (tree->right != NULL)
        binary_tree_is_full(tree->right);
    return (1);
}
