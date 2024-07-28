/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   red_black_tree_utils.h                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:06 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:07 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RED_BLACK_TREE_UTILS_H
# define RED_BLACK_TREE_UTILS_H

# include "red_black_tree.h"

t_red_black_tree	*grandparent(t_red_black_tree *node);
t_red_black_tree	*parent_sibling(t_red_black_tree *node);
t_red_black_tree	*sibling(t_red_black_tree *node);
void				rotate_left(t_red_black_tree *node);
void				rotate_right(t_red_black_tree *node);

#endif
