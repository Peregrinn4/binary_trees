#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child
 *         If tree is NULL, returns 0
 *         A NULL pointer is not considered a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0; // If tree is NULL, return 0

    /* If the node has at least one child, it's a node */
    if (tree->left != NULL || tree->right != NULL)
        return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

    return 0;
}
