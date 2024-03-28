#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0, depth otherwise.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	const binary_tree_t *temp = tree;
	size_t depth = 0;

	while (temp->parent)
	{
		depth += 1;
		temp = temp->parent;
	}

	return (depth);
}
