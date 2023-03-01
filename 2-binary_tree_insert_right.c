#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to insert node on the
 * right of binary tree
 *
 * @parent: pointer to parent node of BT
 * @value: value data of newNode
 *
 * Return: NULL on failure/newNode on success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	temp = parent->right;
	parent->right = newNode;
	newNode->right = temp;

	if (temp != NULL)
		temp->parent = newNode;

	return (newNode);
}
