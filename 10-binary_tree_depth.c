#include <stdlib.h>
#include <binary_trees.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node
 *         If tree is NULL, returns 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return 0; // If tree is NULL, return 0

    /* Traverse up the parent nodes until reaching the root */
    while (tree->parent != NULL)
    {
        tree = tree->parent;
        depth++;
    }

    return depth;
}
