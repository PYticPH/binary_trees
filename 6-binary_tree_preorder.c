#include "binary_trees.h"

/**
 * binary_tree_preorder - Function to traverse node(pre-order)
 *
 * @tree: pointer to binary tree node
 * @func: Function pointet to print data of traversed node
 *
 * Return: NULL or void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

