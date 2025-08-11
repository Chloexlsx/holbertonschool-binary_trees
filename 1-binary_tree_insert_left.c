#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as
 * the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value:  Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node, *o_left;

	if (parent == NULL)
		return (NULL);
	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
		return (NULL);
	/*set the original left child to the parent->left*/
	o_left = parent->left;
	/*n_node slides in on the left*/
	n_node->left = o_left;/*adopt the old child*/
	/*check if parent's left child is not NULL, then push it down*/
	if (parent->left != NULL)
	{
		/*remember there is a parent pointer in binary tree node*/
		/*so change the old_left_node's parent to n_node*/
		o_left->parent = n_node;
	}
	/*move parent*/
	parent->left = n_node;
	return (NULL);

}
