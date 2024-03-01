#include "binary_trees.h"

/**
 * binary_tree_height - binary_tree_height
 * @tree: pointer to the node that we want to calc the height from
 * Return: the height of the tree..("node")
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}


	if (tree->left == NULL && tree->right == NULL)
	{
	return (0);
	}

if (binary_tree_height(tree->left) >= binary_tree_height(tree->right))
return (binary_tree_height(tree->left) + 1);

return (binary_tree_height(tree->right) + 1);

}
