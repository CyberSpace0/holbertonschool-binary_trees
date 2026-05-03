#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_is_leaf - entry point
* @node: string to generate the real key for dictionary
* Return: always (0) success
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->right == NULL && node->left == NULL)
{
return (1);
}

return (0);
}
