#include "binary_trees.h"

/**
 * binary_tree_size - Functio to find size of binary tree
 *
 * @tree: pointer to tree node
 *
 * Return: size_t / 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lbr, rbr;

	if (!tree)
		return (0);

	lbr = binary_tree_size(tree->left);
	rbr = binary_tree_size(tree->right);

	return (lbr + rbr + 1);
}
