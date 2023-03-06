#include "binary_trees.h"

/**
 * binary_tree_depth - Function to find the depth of a binary tree
 *
 * @tree: pointer to tree node
 *
 * Return: size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = tree->parent ? (1 + binary_tree_depth(tree->parent)) : 0;
	return (depth);
}
