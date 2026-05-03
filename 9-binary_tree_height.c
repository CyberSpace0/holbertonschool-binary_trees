#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_height - entry point
* @tree: string to generate the real key for dictionary
* Return: always (0) success
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left;
size_t right;
if (tree == NULL)
{
return (0);
}
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return ((left > right ? left : right) + 1);
}
