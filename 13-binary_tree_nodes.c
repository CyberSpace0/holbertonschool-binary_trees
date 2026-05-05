#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	{
		return (0);
	}
	else if (tree->left || tree->right)
	{
		counter += binary_tree_nodes(tree->left);
		counter += binary_tree_nodes(tree->right);
		return (counter + 1);

	}
	return (counter);
}
