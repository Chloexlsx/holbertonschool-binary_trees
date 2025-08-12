#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Number of nodes in the tree; if tree is NULL, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/*this 0 is important and is  used to count the leaf's subtree*/
	if (tree == NULL)
		return (0);
	/*must add 1 to count the node itself and keep track of subtree no.*/
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
