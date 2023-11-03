#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count
 * the number of leaves. (A NULL pointer is not a leaf)
 *
 * Return: the number of leaves in the tree, Or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			count++;
		}
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}
