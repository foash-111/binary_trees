#include "binary_trees.h"

/**
 * binary_tree_leaves - binary_tree_leaves
 * @tree: pointer to the node that we want to calc the height from
 * Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left) || (tree->right))
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1);


}
