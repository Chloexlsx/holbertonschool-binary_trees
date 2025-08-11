#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree (in edges)
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height (in edges). If tree is NULL, return 0.
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	/*for each parent node, find the longest side then add to it*/
	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);
	return (h_left > h_right ? h_left : h_right);
}
