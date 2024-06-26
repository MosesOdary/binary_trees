#include "binary_trees.h"


/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	uint16_t left = 0;
	uint16_t right = 0;

	if (!tree)
		return (0);

	else
	{
		if ((tree->left) && (tree->right))
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);

			if ((!left) || (!right))
				return (0);

			return (1);
		}
		else if ((!tree->left) && (!tree->right))
			return (1);
	}

	return (0);
}
