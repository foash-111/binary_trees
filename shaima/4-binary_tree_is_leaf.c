#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks for leaf node
 * @node: node to be checked
 * Return: 1 if is leaf , 0 if not
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
	return (0);
if (( node->right == NULL && node->left == NULL) &&
node->parent != NULL)
	return (1);
else
	return (0);
}
