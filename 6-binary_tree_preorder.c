#include "binary_trees.h"
/**
 * binary_tree_preorder - prints elements of the tree using preorder traversal
 * @tree: the tree
 * @func: function to use
 * Return: nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
