#include "binary_trees.h"

/**
 * binary_tree_postorder - binary_tree_preorder
 * @tree: pointer to the root node
 * @func: pointer to a function that will print the value inside the node
 * Return: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, (*func));
		binary_tree_postorder(tree->right, (*func));
		(*func)(tree->n);

	}
}
