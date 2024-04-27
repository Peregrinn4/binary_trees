#include "binary_trees.h"

/**
 * struct BinaryTreeNode - Structure for binary tree node
 * @value: The value stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct BinaryTreeNode {
    int value;
    struct BinaryTreeNode *parent;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
} binary_tree_t;

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        /* Allocation failed */
        return NULL;
    }

    /* Initialize the node */
    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
