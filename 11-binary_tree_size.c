#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int lsize, rsize, tsize;

	if (tree == NULL)
		return (0);
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	tsize = lsize + rsize;

	return (tsize + 1);

}
