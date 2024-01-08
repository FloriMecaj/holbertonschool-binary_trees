#include"binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 1;  // Empty tree is full
    }

    if (tree->left == NULL || tree->right == NULL) {
        return 0;  // Not full if either child is missing
    }

    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}
