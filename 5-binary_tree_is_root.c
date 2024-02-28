#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the given node is a root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
