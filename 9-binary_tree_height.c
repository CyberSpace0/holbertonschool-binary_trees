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
binary_tree_t *node, *tmp;
if (tree == NULL)
{
return (-1);
}
node = tree->left;
tmp = tree->right;
while (node != NULL)
{
left++;
if (node->left == NULL)
{
node = node->right;
}
else
{
node = node->left;
}
}
while (tmp != NULL)
{
right++;
if (tmp->right == NULL)
{
tmp = tmp->left;
}
else
{
tmp = tmp->right;
}
}

return ((right > left) ? right : left) + 1;
}
