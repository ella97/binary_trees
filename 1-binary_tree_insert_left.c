#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return (NULL);
    new = binary_tree_node(parent, value);
    if (!new)
        return (NULL);
    if (parent->left)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }
    parent->left = new;
    new->parent = parent;
    return (new);
}
