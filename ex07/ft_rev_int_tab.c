/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:46:16 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/26 19:32:08 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}		
}
/*
int	main(void)
{
	int	c;
	int	length;
	int	arrnum[] = {9, 8, -3, 2, 5, 1};

	length = 6;
	c = 0;
	ft_rev_int_tab(arrnum, length);
	while (c < length)
	{
		printf("%d,", arrnum[c]);
		c++;
	}	
}*/
