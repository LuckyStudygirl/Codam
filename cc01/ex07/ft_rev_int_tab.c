/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:03:16 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/18 11:38:19 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
	j = 0;
}
/*
int	main(void)
{
	int	size;

	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	size = sizeof(array) / sizeof(array[0]);
	ft_rev_int_tab(array, size);
	return (0);
}
*/
