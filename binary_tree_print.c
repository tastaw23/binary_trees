#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_print_aux(tree, 0);
}

/**
 * binary_tree_print_aux - Auxiliary function for printing a binary tree
 * @tree: Pointer to the root node of the tree to print
 * @level: Level of the current node in the tree
 */
void binary_tree_print_aux(const binary_tree_t *tree, int level)
{
    if (tree == NULL)
        return;

    binary_tree_print_aux(tree->right, level + 1);

    for (int i = 0; i < level; i++)
        printf("   ");

    printf("(%d)\n", tree->n);

    binary_tree_print_aux(tree->left, level + 1);
}

