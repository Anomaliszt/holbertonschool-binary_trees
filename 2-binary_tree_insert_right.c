#include "binary_trees.h"

/**
* binary_tree_insert_right - func that inserts node as the right child of a node
* @parent: pointer to node to insert the right child in
* @value: value sotred in the new node
* Return: poited to created node, NULL if fail or parent NULL
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *right_child = binary_tree_node(parent, value);

	if (right_child == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = right_child;
		right_child->right = parent->right;
	}

	parent->right = right_child;

	return (right_child);
}
