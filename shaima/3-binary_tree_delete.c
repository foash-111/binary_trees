#include "binary_trees.h"
/**
 * binary_tree_delete -  deletes an entire binary tree
 * @tree: root
 * Return: non
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	else
		binary_tree_delete(tree->left);
	/* if (tree->parent)
		free(tree->parent); */
	if (tree->right)
		free(tree->right);
	if (tree->left)
		free(tree->left);
	

	/* binary_tree_delete(tree->left); */
}
