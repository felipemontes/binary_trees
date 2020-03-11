#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: pointer to the parent node
 * @value: value to insert
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = parent->right;
	if (node->right != NULL)
		parent->right->parent = node;
	parent->right = node;
	return (node);
}
