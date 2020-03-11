#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root
 * Return: number of nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int cnt = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		cnt++;

	cnt += binary_tree_nodes(tree->right);
	cnt += binary_tree_nodes(tree->left);

	return (cnt);

}
