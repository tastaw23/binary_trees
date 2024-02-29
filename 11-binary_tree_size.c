#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	/* Recursively calculate size of the left and right subtrees */
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	/* Add 1 for the current node */
	return (size + 1);
}

