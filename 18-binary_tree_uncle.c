#include "binary_trees.h"

/**
* binary_tree_uncle - func that finds the uncle of a node
* @node: pointer to the node to find uncle
*
* Return: pointer to the uncle node or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandpa = node->parent->parent;
	if (grandpa->left == node->parent)
		return (grandpa->right);

	if (grandpa->right == node->parent)
		return (grandpa->left);

	return (NULL);
}
