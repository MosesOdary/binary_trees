#include "binary_trees.h"

/**
 * bst_search - function that searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing a value equals to value
 * If tree is NULL or if nothing is found, your function must return NULL
*/
bst_t *bst_search(const bst_t *tree, int value)
{
    bst_t *node = (bst_t *)tree;

    if (!tree)
        return (NULL);

    while (node)
    {
        if (value == node->n)
            return (node);
        if (value < node->n)
            node = node->left;
        else if (value > node->n)
            node = node->right;
    }

    return (NULL);
}
