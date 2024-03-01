#include "binary_trees.h"
/**
 *  binary_tree_leaves - counts the number of leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the leaves
 * Return: number of leaves, or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	n = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (n);
}
