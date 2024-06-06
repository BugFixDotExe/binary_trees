#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through
 * abinary tree using pre-order traversal
 *
 * @tree: a link to the root of the tree
 * @func: a pointer to a function that takes an int as args
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
