#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes,
 *         NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = first;
	while (ancestor != NULL)
	{
		if (ancestor == second || ancestor->parent == second)
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}

	ancestor = second;
	while (ancestor != NULL)
	{
		if (ancestor == first || ancestor->parent == first)
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}

	return (NULL);
}
