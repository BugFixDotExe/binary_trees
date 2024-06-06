#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_left;
	const binary_tree_t *temp;

	temp = tree;
	if (tree == NULL)
		return (0);
	depth_left = 0;
	while (temp->parent != NULL)
	{
		depth_left += 1;
		temp = temp->parent;
	}
	return (depth_left);
}
