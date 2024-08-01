/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   red_black_tree_insert_utils.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:11 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:12 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "red_black_tree_insert_utils.h"

#include <stdlib.h>

#include "red_black_tree_utils.h"

// inserted is a root, otherwise go to case2
void	insert_case1(t_red_black_tree *node)
{
	if (node->parent == NULL)
		node->color = BLACK;
	else
		insert_case2(node);
}

// inserted is not a root (validated in case1)
// inserted's parent is black, otherwise go to case3
void	insert_case2(t_red_black_tree *node)
{
	if (node->parent->color == BLACK)
		return ;
	insert_case3(node);
}

// inserted is not a root (validated in case1)
// inserted's parent is red (validated in case2)
// inserted's parent's sibling is red, otherwise go to case4
void	insert_case3(t_red_black_tree *node)
{
	t_red_black_tree	*ps;
	t_red_black_tree	*g;

	ps = parent_sibling(node);
	if (ps != NULL && ps->color == RED)
	{
		node->parent->color = BLACK;
		ps->color = BLACK;
		g = grandparent(node);
		g->color = RED;
		insert_case1(g);
	}
	else
		insert_case4(node);
}

// inserted is not a root (validated in case1)
// inserted's parent is red (validated in case2)
// inserted's parent's sibling is black (validated in case3)
// node's direction from its parent is the opposite to
// parent's direction from the grandparent, otherwise go to case5
void	insert_case4(t_red_black_tree *node)
{
	t_red_black_tree	*g;

	g = grandparent(node);
	if (node == node->parent->right && node->parent == g->left)
	{
		rotate_left(node->parent);
		node = node->left;
	}
	else if (node == node->parent->left && node->parent == g->right)
	{
		rotate_right(node->parent);
		node = node->right;
	}
	insert_case5(node);
}

// inserted is not a root (validated in case1)
// inserted's parent is red (validated in case2)
// inserted's parent's sibling is black (validated in case3)
// node's direction from its parent is the same as
// parent's direction from the grandparent (validated in case4)
void	insert_case5(t_red_black_tree *node)
{
	t_red_black_tree	*g;

	g = grandparent(node);
	node->parent->color = BLACK;
	g->color = RED;
	if (node == node->parent->left && node->parent == g->left)
		rotate_right(g);
	else
		rotate_left(g);
}
