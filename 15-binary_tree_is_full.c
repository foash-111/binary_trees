#include "binary_trees.h"

/**
 * binary_tree_is_full - This is a tree in which every node has-
 * either zero children or two children.
 * @tree: pointer to the node that we want to calc the height from
 * Return: 1 if it is full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (
		(tree->left == NULL && tree->right) ||
		(tree->right == NULL && tree->left)
		)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}
return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));

}
