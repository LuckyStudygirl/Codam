/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   red_black_tree_insert_utils.h                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:04 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:05 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RED_BLACK_TREE_INSERT_UTILS_H
# define RED_BLACK_TREE_INSERT_UTILS_H

# include "red_black_tree.h"

// inserted is a root, otherwise go to case2
void	insert_case1(t_red_black_tree *node);

// inserted is not a root (validated in case1)
// inserted's parent is black, otherwise go to case3
void	insert_case2(t_red_black_tree *node);

// inserted is not a root (validated in case1)
// inserted's parent is red (validated in case2)
// inserted's parent sibling is red, otherwise go to case4
void	insert_case3(t_red_black_tree *node);

// inserted is not a root (validated in case1)
// inserted's parent is red (validated in case2)
// inserted's parent sibling is black (validated in case3)
// node's direction from its parent is the opposite to
// parent's direction from the grandparent, otherwise go to case5
void	insert_case4(t_red_black_tree *node);

// inserted is not a root (validated in case1)
// inserted's parent is red (validated in case2)
// inserted's parent sibling is black (validated in case3)
// node's direction from its parent is the same as
// parent's direction from the grandparent (validated in case4)
void	insert_case5(t_red_black_tree *node);

#endif
