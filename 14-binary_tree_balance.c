#include "binary_trees.h"



/**
 * binary_tree_balance - binary_tree_balance
 * @tree: pointer to the node that we want to calc the height from
 * Return: he height of the subtree rooted at its left child minus--
 * the height of the subtree rooted at its right child
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}


	return ((binary_tree_height(tree->left)) - 
	( binary_tree_height(tree->right)));
}
