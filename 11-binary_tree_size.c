#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (!tree)
	{
		return (0);
	}
	else
	{
		counter += binary_tree_size(tree->left);
		counter += binary_tree_size(tree->right);
	}
	return (counter);
}
