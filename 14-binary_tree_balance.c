#include "binary_trees.h"

/**
 * height_tree - Measures the height of a binary tree
 * @t: Pointer to the root node of the tree to measure
 *
 * Return: height; if tree is NULL, return 0
 */
static int height_tree(const binary_tree_t *t)
{
	int R, L;

	/*it will add to return later, so if it is NULL, we want 1 + (-1) = 0*/
	if (t == NULL)
		return (-1);
	L = height_tree(t->left);
	R = height_tree(t->right);

	if (L > R)
		return (1 + L);
	return (1 + R);
}
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
	return (height_tree(tree->left) - height_tree(tree->right));
}
