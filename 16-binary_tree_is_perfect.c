#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: O if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_hgt = 0, right_hgt = 0;

        if (tree == NULL)
                return (0);
        if (tree->left != NULL)
                left_hgt = binary_tree_height(tree->left) + 1;

        if (tree->right != NULL)
                right_hgt = binary_tree_height(tree->right) + 1;

        return (left_hgt >= right_hgt ? left_hgt : right_hgt);
}

/**
* binary_tree_is_perfect - func that checks if binary tree is perfect
* @tree: pointer to root node of tree to check
*
* Return: 0 if tree is NULL, else int
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lefth = 0, righth = 0;

	if (!tree || !(tree!->left->right))
		return (0);

	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);

	if (!(lefth - righth))
		return (1);
	return (0);
}
