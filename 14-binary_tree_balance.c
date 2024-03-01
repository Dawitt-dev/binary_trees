#include "binary_trees.h"
/**
 * binary_tree_h - measures the height of a binary tree
 *@tree:  is a pointer to the root node of the tree to be measured.
 * Return: the height of the tree, if tree is NULL, 0.
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_h(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_h(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}
/**
 * binary_tree_balance - measures the balnce factor of a binary tree
 *@tree:  is a pointer to the root node of the tree to be measured.
 * Return: the balance factor, if tree is NULL, 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0, b = 0;

	if (tree)
	{
		l = ((int)binary_tree_h(tree->left));
		r = ((int)binary_tree_h(tree->right));
		b = l - r;
	}
	return (b);

}
