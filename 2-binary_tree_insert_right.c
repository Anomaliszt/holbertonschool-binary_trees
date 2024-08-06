#include "binary_trees.h"

/**
* binary_tree_insert_right - func that inserts node as the right child of a node
* @parent: pointer to node to insert the right child in
* @value: value sotred in the new node
* Return: poited to created node, NULL if fail or parent NULL
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	right_child->n = value;
	right_child->parent = parent;
	right_child->left = NULL;
	right_child->right = parent->right;

	if (parent->right)
		parent->right->parent = right_child;

	parent->right = right_child;

	return (right_child);
}
