/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   red_black_tree_utils.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:14 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:15 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "red_black_tree_utils.h"

#include <stdlib.h>

t_red_black_tree	*grandparent(t_red_black_tree *node)
{
	if (node != NULL && node->parent != NULL)
		return (node->parent->parent);
	return (NULL);
}

t_red_black_tree	*parent_sibling(t_red_black_tree *node)
{
	t_red_black_tree	*g;

	g = grandparent(node);
	if (g == NULL)
		return (NULL);
	if (node->parent == g->left)
		return (g->right);
	else
		return (g->left);
}

t_red_black_tree	*sibling(t_red_black_tree *node)
{
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

void	rotate_left(t_red_black_tree *node)
{
	t_red_black_tree	*pivot;

	pivot = node->right;
	pivot->parent = node->parent;
	if (node->parent != NULL)
	{
		if (node == node->parent->left)
			node->parent->left = pivot;
		else
			node->parent->right = pivot;
	}
	node->right = pivot->left;
	if (pivot->left != NULL)
		pivot->left->parent = node;
	node->parent = pivot;
	pivot->left = node;
}

void	rotate_right(t_red_black_tree *node)
{
	t_red_black_tree	*pivot;

	pivot = node->left;
	pivot->parent = node->parent;
	if (node->parent != NULL)
	{
		if (node == node->parent->left)
			node->parent->left = pivot;
		else
			node->parent->right = pivot;
	}
	node->left = pivot->right;
	if (pivot->right != NULL)
		pivot->right->parent = node;
	node->parent = pivot;
	pivot->right = node;
}
