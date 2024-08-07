#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: O if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_hgt = 0, right_hgt = 0;    if (tree == NULL)
        return (0);
    if (tree->left != NULL)
        left_hgt = binary_tree_height(tree->left) + 1;
    if (tree->right != NULL)
        right_hgt = binary_tree_height(tree->right) + 1;
    return (left_hgt >= right_hgt ? left_hgt : right_hgt);
}

/**
* binary_tree_balance - func that measures the balance factor of bin tree
* @tree: pointer to root node
*
* Return: balance or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int rright = 0;
	int lleft = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lleft = binary_tree_height(tree->left) + 1;

	if (tree->right)
		rright = binary_tree_height(tree->right) + 1;

	return (lleft - rright);
}
