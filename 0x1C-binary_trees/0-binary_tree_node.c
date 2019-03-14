#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to created parent node
 * @value: value to put in new node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	if (temp != NULL)
	{
		if (parent != NULL)
			temp->parent = parent;
		else
			temp->parent = NULL;
		temp->left = NULL;
		temp->right = NULL;
		temp->n = value;
	}

	return (temp);
}
