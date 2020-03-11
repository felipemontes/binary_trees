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

	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = parent->left;
	if (node->left != NULL)
		node->left->parent = node;
	parent->left = node;
	return (node);
}
