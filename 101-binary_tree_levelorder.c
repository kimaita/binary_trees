#include <stdlib.h>
#include "binary_trees.h"

/**
 * levelorder - executes a function for all nodes at a level
 *
 * @tree: pointer to root node of tree
 * @level: level of nodes in the tree
 * @func: function to execute
 */
void levelorder(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 0)
		func(tree->n);
	else
	{
		levelorder(tree->left, level - 1, func);
		levelorder(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * traversal executing a given function.
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the node
 * is passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
	{
		levelorder(tree, i, func);
	}
}

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
