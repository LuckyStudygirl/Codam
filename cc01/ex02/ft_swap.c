/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:42:43 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/18 11:23:55 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	spare;

	spare = *a;
	*a = *b;
	*b = spare;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("Before the swap \n%d ", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("After the swap \n%d ", *a);
	printf("%d\n ", *b);
	return (0);
}
*/
