#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: the size of the tree, Or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}
