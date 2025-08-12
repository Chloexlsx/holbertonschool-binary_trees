#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree (in edges)
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth (edges). If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dp = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		dp++;
		tree = tree->parent;
	}
	return (dp);
}
