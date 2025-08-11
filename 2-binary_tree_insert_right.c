#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value:  Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node, *o_right;

	if (parent == NULL)
		return (NULL);
	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
		return (NULL);
	/*set o_right to parent->right*/
	o_right = parent->right;
	/*new_node slides into the right*/
	n_node = o_right; /*adopt o_right is !NULL*/
	if (o_right != NULL)
		o_right->parent = n_node;
	parent->right = n_node;
	return (n_node);
}
