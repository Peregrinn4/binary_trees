#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: This function recursively deletes an entire binary tree.
 *              It starts from the root node and deletes each subtree (left and right)
 *              recursively until it reaches the leaf nodes. Finally, it frees the memory
 *              allocated for each node. If the tree pointer is NULL, indicating an empty tree,
 *              the function does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return; // If tree is NULL, do nothing

    /* Recursively delete left and right subtrees */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /* Free the memory allocated for the current node */
    free(tree);
}
