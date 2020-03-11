#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_is_perfect(tree->left);
	r = binary_tree_is_perfect(tree->right);

	if (l == r)
	{
		return (1);
	}

	return (0);
}
