#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: pointer to the node
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		    binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
