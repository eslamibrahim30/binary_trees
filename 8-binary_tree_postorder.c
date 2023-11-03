#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using
 * post-order traversal.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node. The value
 * in the node must be passedas a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    if (tree->left != NULL)
        binary_tree_postorder(tree->left, func);
    if (tree->right != NULL)
        binary_tree_postorder(tree->right, func);
    func(tree->n);
}
