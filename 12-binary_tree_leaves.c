#include "binary_trees.h"

/**
* binary_tree_leaves - func that counts the leaves in binary tree
* @tree: pointer to root node of tree to count leaves
*
* Return: number of leaves or 0 if tree is NULL
*/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return(1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
