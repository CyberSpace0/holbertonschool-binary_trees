#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int counter = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (!tree->left && tree->right)
			counter = -1;
		if (tree->left && !tree->right)
			counter = 1;
		if (tree->left && tree->right)
			counter = 2;
	}
	return (counter);
}
