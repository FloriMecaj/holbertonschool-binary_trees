#include <stdlib.h>
#include "binary_trees.h"

/*
* binary_tree_is_root - ssssssss
* @node: ajahcadjbv
* Return: seuybv
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node->left != NULL && node->right != NULL)
    return (1);
else
    return (0);
}