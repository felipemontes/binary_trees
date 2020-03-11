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
/**
 * binary_tree_balance -  measures the balance factor
 * @tree: pointer to the root
 * Return: the measure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (l - r);

}
