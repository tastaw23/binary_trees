#include "binary_trees.h"
#include <stdlib.h>

int binary_tree_is_complete_recursive(const binary_tree_t *tree, unsigned int index, size_t size);

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    return (binary_tree_is_complete_recursive(tree, 0, binary_tree_size(tree)));
}

/**
 * binary_tree_is_complete_recursive - Recursive helper function for
 * binary_tree_is_complete.
 * @tree: Pointer to the current node.
 * @index: Current index of the node.
 * @size: Number of nodes in the tree.
 *
 * Return: 1 if the subtree is complete, 0 otherwise.
 */
int binary_tree_is_complete_recursive(const binary_tree_t *tree, unsigned int index, size_t size)
{
    if (!tree)
        return (1);

    if (index >= size)
        return (0);

    return (binary_tree_is_complete_recursive(tree->left, 2 * index + 1, size) &&
            binary_tree_is_complete_recursive(tree->right, 2 * index + 2, size));
}

