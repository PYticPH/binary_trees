#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if a node is a leaf
 *
 * @node: pointer to node
 *
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->right == NULL)
		return (1);

	return (0);
}
