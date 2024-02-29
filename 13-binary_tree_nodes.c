#include "binary_trees.h"

/**
 * binary_tree_nodes - binary_tree_nodes
 * @tree: pointer to the node that we want to calc the height from
 * Return: the number of nodes with at least one child it means 1 or 2.
 * nodes with 0 child ("leaves") shouldn't be counted
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left) || (tree->right))
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));


}
