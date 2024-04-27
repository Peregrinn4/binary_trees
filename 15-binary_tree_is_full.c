#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is full, otherwise 0
 *         If tree is NULL, returns 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0; // If tree is NULL, return 0

    /* If the tree is empty, it is full */
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    /* If the tree has both left and right subtrees, recursively check if they are full */
    if (tree->left != NULL && tree->right != NULL)
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

    return 0;
}
