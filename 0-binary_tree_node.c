#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* binary_tree_node - entry point
* @parent: string to generate the real key for dictionary
* @value: value
* Return: always (0) success
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
free(node);
return (NULL);
}
node->value = value;
node->left = NULL;
node->right = NULL;

return (node);
}
