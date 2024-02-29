#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle is found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left &&
	    node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	if (node->parent->parent->right &&
	    node->parent->parent->right != node->parent)
		return (node->parent->parent->right);

	return (NULL);
}

