#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a node is a leaf
 * @node: a leaf node
 * Return: a 1 if it's root and a 0 if it's a leaf
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/**
	 * In a binary tree any node can be considered a root
	 * node as long as it has no parent
	 */
	if (node->parent == NULL)
		return (1);
	return (0);
}
