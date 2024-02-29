#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node
 * @parent: parent node
 * @value: value to be inserted
 * Return: pointer to new node

 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new =  malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent == NULL)
		parent = new;
	return (new);
}
