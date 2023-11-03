#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: a pointer to the root node of the tree to measure the depth.
 *
 * Return: the depth of the tree, Or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->parent && tree->left != NULL && tree->right != NULL)
	{
		return (0);
	}
	if (!tree->parent)
	{
		binary_tree_depth(tree->left);
		d++;
		binary_tree_depth(tree->right);
	}
	return (d);
}
