#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t binary_tree_depth(const binary_tree_t *tree);


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


/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (!tree || !tree->parent)
	{
		return (0);
	}
	else
		counter += binary_tree_depth(tree->parent);

	return (counter);
}
