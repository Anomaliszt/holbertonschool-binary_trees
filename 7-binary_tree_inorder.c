#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - goes through a binary tree using inorder traversal
 * @tree: pointer to the root of the tree
 * @func: function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
