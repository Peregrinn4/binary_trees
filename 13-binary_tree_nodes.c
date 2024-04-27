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
    size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
