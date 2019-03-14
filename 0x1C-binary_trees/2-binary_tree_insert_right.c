#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to node to insert
 * @value: value to put in node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	/* mem leak here */
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	new->n = value;

	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}
