#include "binary_trees.h"

/**
 * binary_tree_inorder - binary_tree_preorder
 * @tree: pointer to the root node
 * @func: pointer to a function that will print the value inside the node
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, (*func));
		(*func)(tree->n);
		binary_tree_inorder(tree->right, (*func));

	}
}
