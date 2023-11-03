#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes oes through a binary tree using in-order traversal.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node. The value
 * in the node must be passedas a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    func(tree->n);
    if (tree->left != NULL)
        binary_tree_preorder(tree->left, func);
    if (tree->right != NULL)
        binary_tree_preorder(tree->right, func);
}
