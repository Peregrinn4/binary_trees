#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree
 *         If tree is NULL, returns 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0; // If tree is NULL, return 0

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect, otherwise 0
 *         If tree is NULL, returns 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0; // If tree is NULL, return 0

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    /* Check if left and right subtrees have the same height */
    if (left_height != right_height)
        return 0;

    /* Check if left and right subtrees are perfect */
    if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
        return 1;

    /* If any condition fails, the tree is not perfect */
    return 0;
}
