#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height.
 * Return: the largest height of the right and left sub trees
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_sub_tree = 0;
	size_t right_sub_tree = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	temp = tree;
	while (temp->left != NULL)
	{
		temp = temp->left;
		left_sub_tree += 1;
	}
	temp = tree;
	while (temp->right != NULL)
	{
		temp = temp->right;
		right_sub_tree += 1;
	}

	if (left_sub_tree >= right_sub_tree)
		return (left_sub_tree);
	else
		return (right_sub_tree);
}
