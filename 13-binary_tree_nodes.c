#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 *@tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nl, nr;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		nr = binary_tree_nodes(tree->right);
		nl = binary_tree_nodes(tree->left);
		return (1 + nl + nr);
	}
	return (0);
}
