#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	max = (left_height >= right_height) ? left_height : right_height;

	/* Skip incrementing height if at leaf */
	if (max == 0 && tree->left == NULL && tree->right == NULL)
		return (max);

	return (max + 1);
}
