/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:32:01 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/21 13:57:16 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = 85;
	d = 2;
	div = 0;
	mod = 0;
	ft_div_mod(c, d, &div, &mod);
	printf("div: %d mod: %d \n",div ,mod);
}*/
