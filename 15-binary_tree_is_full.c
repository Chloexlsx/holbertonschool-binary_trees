#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 *         If tree is NULL, return 0 (per specification)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*0 children*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*1 child: not full*/
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	/*two child*/
	return (binary_tree_is_full(tree->left)
&& binary_tree_is_full(tree->right));
}
