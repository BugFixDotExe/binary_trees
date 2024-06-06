#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_sub_tree = 0;
	size_t right_sub_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		binary_tree_height(tree->left);
		return (left_sub_tree + 1);
	}
	else if (tree->right != NULL)
	{
		binary_tree_height(tree->right);
		return (right_sub_tree + 1);
	}
	if (left_sub_tree >= right_sub_tree)
		return (left_sub_tree);
	else
		return (right_sub_tree);
}
