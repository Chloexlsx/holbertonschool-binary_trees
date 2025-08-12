#include "binary_trees.h"

/**
 * height_edges - Compute height in edges (NULL => -1, leaf => 0)
 * @t: Pointer to node
 *
 * Return: Height in edges; -1 if t is NULL
 */
static int height_edges(const binary_tree_t *t)
{
	int L, R;

	if (t == NULL)
		return (-1);
	L = height_edges(t->left);
	R = height_edges(t->right);
	if (L > R)
		return (1 + L);
	return (1 + R);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 *         If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	/*check if no child*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*check if one child*/
	if (tree->left != NULL || tree->right != NULL)
		return (0);
	/*check if the height is the same*/
	h_left = height_edges(tree->left);
	h_right = height_edges(tree->right);
	if (h_left != h_right)
		return (0);
	return (binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right));
}

