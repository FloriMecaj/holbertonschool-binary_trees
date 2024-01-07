#include <stdlib.h>
#include "binary_trees.h"

/*
* binary_tree_is_leaf - sesssssss
* @node: aefadca
* Return: dczcadcac
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node->left == NULL && node->right == NULL)
        return (1);
    else
        return (0);
}
