/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:32:27 by timmi             #+#    #+#             */
/*   Updated: 2024/06/21 14:39:34 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main (void)
{
	int	n1;
	int	n2;

	n1 = 7;
	n2 = 2;

	ft_ultimate_div_mod(&n1, &n2);
	printf("%d, %d", n1, n2);
	return(0);
}
*/
