#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If a node has one child, but not both, it is not a full tree */
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		return (0);

	/* If the node has no children, it is a leaf and satisfies the condition */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively check for fullness in the left and right subtrees */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

