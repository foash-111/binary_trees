#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the node
 * @value: value of the node
 * Return: the pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return NULL;

new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;

parent = new_node;

return (parent);

}
