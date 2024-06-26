#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 * 
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s 
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * struct queue_s - doubly linked list queue
 * @new: A node binary tree
 * @next: Pointer to the next node
 */

typedef struct queue_s
{
    binary_tree_t *new;
    struct queue_s *next;
} queue_t;

/* helper function */

void binary_tree_print(const binary_tree_t *);

/** function prototypes */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif