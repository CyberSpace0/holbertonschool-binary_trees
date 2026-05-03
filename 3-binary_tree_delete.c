#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_delete - entry point
* @tree: string to generate the real key for dictionary
* Return: always (0) success
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
