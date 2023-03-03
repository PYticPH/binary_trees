#include "binary_trees.h"

/**
 * binary_tree_inorder - Function to traverse node(inorder)
 *
 * @tree: pointer to binary tree node
 * @func: Function pointet to print data of traversed node
 *
 * Return: NULL or void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

