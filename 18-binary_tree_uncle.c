#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node or NULL if:
 *  - node is NULL or has no sibling
 *  - the node's parent IS null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandp;


	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandp = node->parent->parent;
	return ((grandp->left == node->parent) ? grandp->right : grandp->left);
}
