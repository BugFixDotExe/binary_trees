#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a leaf node
 * Return: a 1 if it's a leaf and a 0 if it's not a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/**
	 * Before a node can be considered to be a leaf node
	 * In a binary tree, a leaf node is a node that has
	 * no children, meaning both its left and right pointers
	 * are null. So, to be considered a leaf node
	 * a node must not have any children
	 */
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
