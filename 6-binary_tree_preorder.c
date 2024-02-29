#include "binary_trees.h"

/**
 * binary_tree_preorder - binary_tree_preorder
 * @tree: pointer to the root node
 * @func: pointer to a function that will print the value inside the node
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, (*func));
		binary_tree_preorder(tree->right, (*func));

	}
}
