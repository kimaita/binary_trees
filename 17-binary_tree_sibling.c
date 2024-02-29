#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node or NULL if:
 *  - node is NULL or has no sibling
 *  - the node's parent IS null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent;

    parent = node->parent;
    if (!node || !parent)
        return (NULL);

    return ((node == parent->left) ? parent->right : parent->left);
}
