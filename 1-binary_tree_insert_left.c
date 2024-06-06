#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node
 * @parent: the parent to be of the current node
 * @value: an integer value, to be inserted into the node
 * Return: a new node containg the value and a link to it's parent node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/**
	 * A situation might arise or and edge case might arise such
	 * Parent node or parent root node is NULL
	 * Thus the need to perform the following arises:
	 * Return NULl or Create a new parent node
	 * But the specification told to return NULL
	 */
	if (parent == NULL)
		return (NULL);
	/**
	 * A situation might arise or edge case where the left of the root or parent
	 * is NULL, indicating the parent or root node has no child or leaf node
	 * Thus the following has to be done:
	 * Create a new child or lead node for the parent or root node
	 * Make the leaf or child node's parent the root or parent node
	 * This is handled in the binary_tree_node() function.
	 */
	else if (parent->left == NULL)
	{
		new_node = binary_tree_node(parent, value);
		parent->left = new_node;
		return (new_node);
	}
	/**
	 * This if TRUE indicates the existence of a child node
	 * Thus, the need to insert a new node before this node arises
	 * The following conditions has to be met:
	 * The new node must be placed before the old node
	 * The new node must become the parent of the old node
	 * The new node parent must become the old node parent.
	 */
	else if (parent->left != NULL)
	{
		new_node = binary_tree_node(parent->left->parent, value);
		parent->left->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
	}
	return (new_node);
}
