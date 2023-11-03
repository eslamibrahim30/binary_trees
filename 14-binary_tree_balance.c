#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: the balance factor of the tree, Or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	signed int l = 0;
	signed int r = 0;

	if (!tree)
	{
		return (0);
	}
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
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
