#include "binary_trees.h"

/**
 * binary_tree_postorder - Function to traverse node(post-order)
 *
 * @tree: pointer to binary tree node
 * @func: Function pointet to print data of traversed node
 *
 * Return: NULL or void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

