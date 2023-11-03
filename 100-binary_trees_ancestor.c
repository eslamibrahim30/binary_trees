#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: a pointer to the first node.
 * @second: a pointer to the second node.
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes.
 * If no common ancestor was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(
    const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *first_ptr = (binary_tree_t *)first;
    binary_tree_t *second_ptr = (binary_tree_t *)second;

    while (first_ptr != NULL)
    {
        while (second_ptr != NULL)
        {
            if (first_ptr == second_ptr)
                return (first_ptr);
            second_ptr = second_ptr->parent;
        }
        second_ptr = (binary_tree_t *)second;
        first_ptr = first_ptr->parent;
    }
    return (NULL);
}
