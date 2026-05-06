#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_is_complete - entry point
* @tree: string to generate the real key for dictionary
* Return: always (0) success
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (binary_tree_depth(tree->left) == binary_tree_depth(tree->right))
{
return (1);
}
return (0);
}
