#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the parent node
 * @value: value to insert
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	node->n = value;
	node->right = NULL;
	node->parent = parent;

	if (parent->left)
		node->left = parent->left, node->left->parent = node;
	else
		parent->left = NULL;
	parent->left =  node;
	return (node);
}
