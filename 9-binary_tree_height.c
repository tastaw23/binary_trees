#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);    /* Height left subtree */
	right_height = binary_tree_height(tree->right);  /* Height right subtree */

	/* Return  maximum height left or right subtree, plus 1 for the node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

