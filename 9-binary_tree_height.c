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
size_t right = 0, left = 0;
if (tree == NULL)
{
return;
}
right = binary_tree_height(tree->right);
left = binary_tree_height(tree->left);

if (right > left)
{
return (right + 1);
}
else
{
return (left + 1);
}
}
