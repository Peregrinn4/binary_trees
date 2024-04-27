#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves in the binary tree
 *         If tree is NULL, returns 0
 *         A NULL pointer is not considered a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0; // If tree is NULL, return 0

    /* If the node has no left or right child, it's a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return 1; // Return 1 for leaf node

    /* Recursively count the number of leaves in the left and right subtrees */
    size_t left_leaves = binary_tree_leaves(tree->left);
    size_t right_leaves = binary_tree_leaves(tree->right);

    /* Return the sum of leaves in left and right subtrees */
    return left_leaves + right_leaves;
}
