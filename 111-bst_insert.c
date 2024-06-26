#include "binary_trees.h"


/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 * If the address stored in tree is NULL, created node must become root node
 * If the value is already present in the tree, it must be ignored
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *newNode = NULL;
	bst_t *tree_2 = NULL;

	if (!tree || (!(*tree)))
	{
		newNode = binary_tree_node(NULL, value);
		*tree = newNode;
		return (newNode);
	}

	tree_2 = *tree;

	while (tree_2)
	{
		if (tree_2->n == value)
			return (NULL);

		if (tree_2->n > value)
		{
			if (!tree_2->left)
			{
				tree_2->left = binary_tree_node(tree_2, value);
				return (tree_2->left);
			}

			tree_2 = tree_2->left;
		}

		if (tree_2->n < value)
		{
			if (!tree_2->right)
			{
				tree_2->right = binary_tree_node(tree_2, value);
				return (tree_2->right);
			}

			tree_2 = tree_2->right;
		}
	}

	return (NULL);
}
