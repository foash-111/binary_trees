#include "binary_trees.h"

/**
 * binary_tree_preorder - pred order tree -->> root->left->right
 * @tree: root node
 * @func: func to print node
 * Return: no return
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;


binary_tree_t *root = (binary_tree_t*) tree;

/*looking for left tree*/
func(root->n);
while(root->left != NULL)
		root = root->left;
while (1)
{
	root = root->parent;
	if (root->parent == NULL)
		break;
	func(root->n);
	func(root->left->n);
	func(root->right->n);
	
}

/*looking for right tree*/
root = tree->right;
while(root->left != NULL)
		root = root->left;
while (1)
{
		root = root->parent;
	if (root->parent == NULL)
		break;
	func(root->n);
	func(root->left->n);
	func(root->right->n);
	
}


}
