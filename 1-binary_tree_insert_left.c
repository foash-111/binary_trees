#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that binary_tree_insert_left
 * @parent: pointer to the node
 * @value: value of the node
 * Return: the pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new_node->left = parent->left;
	new_node->left->parent = new_node;
}

	new_node->parent = parent;
	parent->left = new_node;
	return (new_node);

}
