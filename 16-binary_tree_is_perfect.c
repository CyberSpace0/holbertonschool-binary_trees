#include "binary_trees.h"

/**
 * measure_perfect_height - Measures the height to check if a tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: Height of the tree if it is perfect, -1 otherwise
 */
int measure_perfect_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = measure_perfect_height(tree->left);
	right_h = measure_perfect_height(tree->right);

	if (left_h == -1 || right_h == -1 || left_h != right_h)
		return (-1);

	return (left_h + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (measure_perfect_height(tree) != -1)
		return (1);

	return (0);
}
