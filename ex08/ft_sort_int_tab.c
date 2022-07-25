/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:51:08 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/25 19:59:58 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i + 1] = tab[i];
			tab[i + 1] = aux;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	main(void)
{
	int	c;
	int	size;
	int	arrnum[] = {8, 2, 9, 1, 6, 3, 5, -7, 1};

	c = 0;
	size = 9;
	while (c <= size -1)
	{
		printf("%d", arrnum[c]);
		c++;
	}
	c = 0;
	printf("\n");
	ft_sort_int_tab(arrnum, size);
	while (c <= size -1)
	{
		printf("%d", arrnum[c]);
		c++;
	}
	c = 0;
}
