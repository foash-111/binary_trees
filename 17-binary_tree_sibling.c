#include "binary_trees.h"

/**
 * binary_tree_is_full - This is a tree in which every node has-
 * either zero children or two children. 
 * @tree: pointer to the node that we want to calc the height from
 * Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (
        node == NULL || node->parent == NULL ||
        node->parent->left == NULL || node->parent->right == NULL
        )
    return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);
    else
        return (node->parent->left);




}
