#include "binary_trees.h"

/**
 * binary_tree_depth - binary_tree_depth
 * @tree: pointer to the node that we want to calc the depth from
 * Return: the depth of the tree..("node")
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;
    const binary_tree_t *current;

    if (tree == NULL)
    return (0);

    current = tree;

    while (current->parent)
    {
        depth += 1;
        current = current->parent;
    }
    return (depth);
}
