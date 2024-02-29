#include "binary_trees.h"

/**
 * binary_tree_height - binary_tree_height
 * @tree: pointer to the node that we want to calc the height from
 * Return: the height of the tree..("node")
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_sum = 0;
	size_t right_sum = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
	left_sum += binary_tree_height(tree->left) + 1;
	/**
	* I used if to ensure that left_child is exist so,
	* increase left_sum by 1 safely
	* if i didn't use if, it will increase left sum by 1 even if left child -
	* is null
	*/
	}
	if (tree->right)
	{
	right_sum += binary_tree_height(tree->right) + 1;
	}




	if (left_sum >= right_sum)
	return (left_sum);
	else
	return (right_sum);

}
