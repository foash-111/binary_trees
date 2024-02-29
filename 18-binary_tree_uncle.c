#include "binary_trees.h"

/**
 * binary_tree_uncle - This is a tree in which every node has-
 * either zero children or two children.
 * @node: pointer to the node that we want to calc the height from
 * Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (
		node == NULL || node->parent == NULL ||
		node->parent->parent == NULL ||
		node->parent->parent->left == NULL ||
		node->parent->parent->right == NULL
		)
	return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

}
