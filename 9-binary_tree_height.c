#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int ldepth;
	int rdepth;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	ldepth = binary_tree_height(tree->left);
	rdepth = binary_tree_height(tree->right);
	if (ldepth > rdepth)
	{
		return (ldepth + 1);
	}
	else
	{
		return (rdepth + 1);
	}
}
