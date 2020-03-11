#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node
 * @parent: parent node
 * @value: value to insert
 * Return: returns pointer to a new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = new->right = NULL;

	return (new);
}
