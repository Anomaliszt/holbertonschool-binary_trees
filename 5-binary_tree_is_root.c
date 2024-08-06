#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - unction that checks if a given node is a root
 * @node: node to check
 * Return: 0 if it's not a root else 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
