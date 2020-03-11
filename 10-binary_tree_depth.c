#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int pdepth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	pdepth = binary_tree_depth(tree->parent);

	return (pdepth + 1);
}
