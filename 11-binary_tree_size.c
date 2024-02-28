#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree:  pointer to the root node of the tree to measure the size
 *
 * Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize, rsize, tree_size;

	if (!tree)
		return (0);

	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	tree_size = lsize + rsize + 1;
	return (tree_size);
}
