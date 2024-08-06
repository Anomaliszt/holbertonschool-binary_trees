#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as left-child
 * @parent: parent of the new node
 * @value: value stored in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	else
		parent->left = new;
	return (new);
}
