#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert node at left branch
 *
 * @parent: tree parent node
 * @value: data value of node
 *
 * Return: pointer to newNode on success, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	temp = parent->left;
	parent->left = newNode;
	newNode->left = temp;

	if (temp != NULL)
		temp->parent = newNode;

	return (newNode);
}
