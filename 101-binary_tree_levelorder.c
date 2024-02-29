#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - Traverses binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: The value in each node must be passed as a parameter to func.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue;
	size_t front = 0, rear = 0, size = 0;

	if (!tree || !func)
		return;

	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (!queue)
		return;

	queue[rear] = (binary_tree_t *)tree;

	while (size <= 1024 && queue[front])
	{
		func(queue[front]->n);

		if (queue[front]->left)
		{
			rear = (rear + 1) % 1024;
			queue[rear] = queue[front]->left;
		}

		if (queue[front]->right)
		{
			rear = (rear + 1) % 1024;
			queue[rear] = queue[front]->right;
		}

		front = (front + 1) % 1024;
		size++;
	}

	free(queue);
}

