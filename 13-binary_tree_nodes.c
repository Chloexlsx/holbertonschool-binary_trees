#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: Number of nodes with >= 1 child; if tree is NULL, return 0
 *         Note: A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*count the child of the node and keep search in the subtree*/
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
	/*if (tree->left && right == NULL), a leaf node, come to this line*/
	/*returns the number counted*/
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
