#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure
 * Return: height or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (depth);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
