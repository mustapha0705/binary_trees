#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 *
 * @parent: A pointer to the node to insert the right child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);

    if (new_node == NULL)
        return (NULL);

    if (parent->right == NULL)
    {
        parent->right = new_node;
    }
    else
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
        parent->right = new_node;
    }

    return (new_node);
}
