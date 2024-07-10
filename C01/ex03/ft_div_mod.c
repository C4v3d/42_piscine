/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:25:56 by timmi             #+#    #+#             */
/*   Updated: 2024/06/21 14:39:24 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main (void)
{
	int	n1;
	int	n2;
	int	div;
	int	mod;

	n1 = 7;
	n2 = 2;

	ft_div_mod(n1, n2, &div, &mod);

	printf("%d / %d = %d, reste %d", n1, n2, div, mod);
}
*/
