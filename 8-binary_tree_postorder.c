#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);    /* Recursive call left subtree */
	binary_tree_postorder(tree->right, func);   /* Recursive call right subtree */
	func(tree->n);                           /* Call the function current node */
}

