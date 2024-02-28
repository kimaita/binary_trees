#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child set as the right-child of the new node.
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
