#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: height(left) - height(right); if tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*height() will return the height of left side, same for right*/
	/*then subtract two figure to get the factor*/
	return ((int)binary_tree_height(tree->left)
- (int)binary_tree_height(tree->right));
}
