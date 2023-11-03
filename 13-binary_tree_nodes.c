#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: a pointer to the root node of the tree to count
 * the nodes with at least 1 child in a binary tree.
 * (A NULL pointer is not a leaf)
 *
 * Return: the number of nodes with at least 1 child in the tree,
 * Or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_count = 0;
	size_t r_count = 0;

	if (!tree)
	{
		return (0);
	}
	l_count += binary_tree_nodes(tree->left);
	r_count += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
	{
		return (l_count + r_count + 1);
	}
	return (l_count + r_count);
}
