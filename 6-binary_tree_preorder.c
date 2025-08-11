#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Function to call for each node (takes the node's value)
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n); /*visit node*/
	binary_tree_preorder(tree->left, func); /*then left*/
	binary_tree_preorder(tree->right, func); /*then right*/
}
