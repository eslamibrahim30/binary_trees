#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node.
 * If node is NULL or the parent is NULL, return NULL.
 * If node has no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
