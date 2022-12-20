#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node from root
 * @tree: node to check
 * Return: 0 if at the root otherwise the number of debth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
