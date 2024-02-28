#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that binary_tree_insert_right
 * @parent: pointer to the node
 * @value: value of the node
 * Return: the pointer to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	return (NULL);

binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;


if (parent->left != NULL)
{
	new_node->right = parent->right;
	new_node->right->parent = new_node;
}

	new_node->parent = parent;
	parent->right = new_node;
	return (new_node);

}
