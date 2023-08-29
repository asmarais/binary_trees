#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that coints the leaves of a binary tree
 * @tree: a pointer to the root of the tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left != NULL)
		return (2);
	return (1);
}
