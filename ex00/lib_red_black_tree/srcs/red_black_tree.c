/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   red_black_tree.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:16 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:17 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "red_black_tree.h"

#include <stdlib.h>

#include "red_black_tree_insert_utils.h"

t_red_black_tree	*create_red_black_tree_node(void *item)
{
	t_red_black_tree	*node;

	node = (t_red_black_tree *)malloc(sizeof(t_red_black_tree));
	if (node == NULL)
		return (NULL);
	node->item = item;
	node->color = RED;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

t_red_black_tree	*simple_insert(
						t_red_black_tree **root,
						t_red_black_tree *parent,
						void *item,
						int (*cmpf)(void *, void *)
)
{
	if (*root == NULL)
	{
		*root = create_red_black_tree_node(item);
		if (*root == NULL)
			return (NULL);
		(*root)->parent = parent;
		return (*root);
	}
	if (cmpf(item, (*root)->item) < 0)
		return (simple_insert(&(*root)->left, *root, item, cmpf));
	else
		return (simple_insert(&(*root)->right, *root, item, cmpf));
}

t_red_black_tree	*insert_new_item(
						t_red_black_tree *root,
						void *item,
						int (*cmpf)(void *, void *)
						)
{
	t_red_black_tree	*node;

	node = simple_insert(&root, NULL, item, cmpf);
	if (node == NULL)
		return (NULL);
	insert_case1(node);
	while (node->parent != NULL)
		node = node->parent;
	return (node);
}

void	free_red_black_tree(
			t_red_black_tree *root,
			void (*free_item)(void *)
			)
{
	if (root == NULL)
		return ;
	free_red_black_tree(root->left, free_item);
	free_red_black_tree(root->right, free_item);
	(*free_item)(root->item);
	free(root);
}

void	*search_element(
			t_red_black_tree *root,
			void *data_ref,
			int (*cmpf)(void *, void *)
			)
{
	if (root == NULL)
		return (NULL);
	if ((*cmpf)(data_ref, root->item) < 0)
		return (search_element(root->left, data_ref, cmpf));
	else if ((*cmpf)(data_ref, root->item) > 0)
		return (search_element(root->right, data_ref, cmpf));
	else
		return (root->item);
}
