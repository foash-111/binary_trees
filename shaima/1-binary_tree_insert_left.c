/*Write a function that inserts a node as the left-child of another node*/
#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a new node to the left
 * @parent: parent node to insert the left child in
 * @value: value to be inserted
 * Return: pointer to new node
 */

/**
If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new =  malloc(sizeof(binary_tree_t));
	/* return a pointer to the created node, or NULL on failure or if parent is NULL*/
	if (new == NULL || parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	/**
	* parent already has left-child, the new node take its place,
	* old left-child must be set as left-child of new node.
	*/
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}


	return (new);
}
