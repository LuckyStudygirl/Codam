/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   red_black_tree.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:08 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:09 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RED_BLACK_TREE_H
# define RED_BLACK_TREE_H

enum e_rb_tree_node_color
{
	RED,
	BLACK
};

typedef struct s_red_black_tree
{
	struct s_red_black_tree		*parent;
	struct s_red_black_tree		*left;
	struct s_red_black_tree		*right;
	enum e_rb_tree_node_color	color;
	void						*item;
}	t_red_black_tree;

t_red_black_tree	*create_red_black_tree_node(void *item);
t_red_black_tree	*insert_new_item(
						t_red_black_tree *root,
						void *item,
						int (*cmpf)(void *, void *)
						);
void				free_red_black_tree(
						t_red_black_tree *root,
						void (*free_item)(void *)
						);
void				*search_element(
						t_red_black_tree *root,
						void *data_ref,
						int (*cmpf)(void *, void *)
						);

#endif
