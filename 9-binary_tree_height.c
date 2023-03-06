#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure height of
 * binary tree
 *
 * @tree: pointer to tree node
 *
 * Return: size_t or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh;
	size_t rh;

	if (tree == NULL)
		return (0);

	lh = tree->left ? (1 + binary_tree_height(tree->left)) : 0;
	rh = tree->right ? (1 + binary_tree_height(tree->right)) : 0;

	if (lh > rh)
		return (lh);
	return (rh);
}
