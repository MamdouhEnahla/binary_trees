#include "binary_trees.h"

/**
* binary_tree_postorder - Performs post-order traversal of a binary tree.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*
* Description: Calls the provided function for each node in post-order.
* The value in the node is passed as a parameter to the function.
* If tree or func is NULL, do nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}

