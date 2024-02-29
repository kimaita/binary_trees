#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full or 0 if tree is NULL or not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r_full, l_full;

	if (!tree || (!tree->left != !tree->right))
		return (0);

	l_full = binary_tree_is_full(tree->left);
	r_full = binary_tree_is_full(tree->right);

	return (r_full == l_full);
}
