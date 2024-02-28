#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node without any children.
 *
 * @parent: pointer to the parent node of the node to create
 * @value: data to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
