#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 The tree is perfect, Or 0 if tree is not perfect or NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int len = 0;

	if (!tree)
	{
		return (1);
	}
	len = binary_tree_height(tree);
	return ((len & (len + 1)) == 0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the tree, Or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_rigth = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		h_left = binary_tree_height(tree->left);
		h_rigth = binary_tree_height(tree->right);
		if (h_left >= h_rigth)
		{
			return (h_left + 1);
		}
		else
		{
			return (h_rigth + 1);
		}
	}
}
