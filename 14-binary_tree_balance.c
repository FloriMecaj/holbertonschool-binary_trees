#include"binary_trees.h"

/**
 * binary_tree_height -calculates the height of a binary tree
 * @tree: -points to the root of the tree
 * Retrun: (height)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_edges = 0;
        size_t right_edges = 0;
        size_t height = 0;

        if (tree == NULL || (tree->left ==NULL && tree->right == NULL))
                return (0);
        if (tree->left != NULL)
                left_edges = binary_tree_height(tree->left);
        if (tree->right != NULL)
                right_edges = binary_tree_height(tree->right);
        if (left_edges > right_edges)
        {
                height = left_edges + 1;
                return (height);
        }
        else
        {
                height = right_edges + 1;
                return (height);
        }

}
/**
 * binary_tree_balance -finds the balance of a binary tree
 * @tree: -points to the root of the tree
 * Retrun: (balance)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_edges = 0;
	int right_edges = 0;
	int balance;

	if (tree == NULL)
		return (0);
	left_edges = (int) binary_tree_height(tree->left);
	right_edges = (int) binary_tree_height(tree->right);
	balance = left_edges - right_edges;
	return (balance);
}
