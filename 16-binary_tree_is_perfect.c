#include "binary_trees.h"

/**
 * tree_is_perfect - checks if a tree is perfect
 * @tree: tree to check
 * Return: 0 if it's not perfect or the height if it is perfect
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree->left && tree->right)
	{
		left_height = 1 + tree_is_perfect(tree->left);
		right_height = 1 + tree_is_perfect(tree->right);

		if (left_height == right_height && left_height != 0)
			return (left_height);

		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (tree_is_perfect(tree) != 0);
}

