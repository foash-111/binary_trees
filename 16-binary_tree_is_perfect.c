#include "binary_trees.h"


/**
 * tree_height_helper - binary_tree_height
 * @tree: pointer to the node that we want to calc the height from
 * Return: the height of the tree..("node")
*/

size_t tree_height_helper(const binary_tree_t *tree)
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
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
	return (0);
	}

if (tree_height_helper(tree->left) >= tree_height_helper(tree->right))
return (tree_height_helper(tree->left) + 1);

return (tree_height_helper(tree->right) + 1);

}




/**
 * binary_tree_is_perfect - all leaf nodes are at the max depth of the tree,
 *  and the tree is completely filled with no gaps.
 * @tree: pointer to the node that we want to calc the height from
 * Return: 1 if it is perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
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

if (tree_height_helper(tree->left) == tree_height_helper(tree->right))
return (1);

return (tree_height_helper(tree->left) * tree_height_helper(tree->right));
}
