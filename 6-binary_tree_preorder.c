#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_preorder - entry point
* @tree: string to generate the real key for dictionary
* @func: pointer function
* Return: always (0) success
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
