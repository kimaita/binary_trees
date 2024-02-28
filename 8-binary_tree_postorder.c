#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree in post-order traversal
 *
 * Does nothing  if tree or func is NULL
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node is passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
