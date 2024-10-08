#include "binary_trees.h"

/**
* binary_tree_is_leaf - func that checks if node is a leaf
* @node: pointer to node to check
*
* Return: 1 if node is leaf, 0 if not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
