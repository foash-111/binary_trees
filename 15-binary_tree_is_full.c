#include "binary_trees.h"

/**
 * binary_tree_is_full - This is a tree in which every node has-
 * either zero children or two children. 
 * @tree: pointer to the node that we want to calc the height from
 * Return: he height of the subtree rooted at its left child minus--
 * the height of the subtree rooted at its right child
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

    if ((tree->left && tree->right) || ((tree->left == NULL && tree->right == NULL)))
    return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
