#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to node to insert
 * @value: value to put in node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		/* attach current left pointer to new */
		parent->left->parent = new;
		/* make new left connection */
		new->left = parent->left;
	}
	/* connect current left to current parent */
	parent->left = new;

	return (new);
}
