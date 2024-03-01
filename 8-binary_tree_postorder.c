#include "binary_trees.h"

/**
 * binary_tree_postorder - goes thro binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: Functn traverses a binary tree using post-order traversal
 * and calls a given function for each visited node. The value in each node is
 * passed as a parameter to the function. If the tree or func pointer is NULL,
 * this function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
