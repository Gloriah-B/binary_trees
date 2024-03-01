#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Description: This function deletes an entire binary tree by recursively
 * deleting each node in a post-order traversal manner. If the tree pointer
 * is NULL, it does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

	free(tree);
	}
}
