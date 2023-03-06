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
	size_t height_r = 0;
	size_t height_l = 0;

	const binary_tree_t *right, *left;


	if (tree == NULL)
		return (0);

	left = tree;
	right = left;

	while (right->right != NULL)
	{
		right = right->right;
		height_r++;
	}

	while (left->left != NULL)
	{
		left = left->left;
		height_l++;
	}

	if (height_r >= height_l)
		return (height_r);
	return (height_r++);
}
