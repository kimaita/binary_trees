#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);
	if (!node)
	{
		return (NULL);
	}

	if (parent->left)
	{
		binary_tree_t *tmp = parent->left;

		tmp->parent = node;
		node->left = tmp;
	}
	parent->left = node;

	return (node);
}
