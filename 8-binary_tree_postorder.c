#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_postorder - entry point
* @tree: string to generate the real key for dictionary
* @func: pointer function
* Return: always (0) success
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);

}
