/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:22:17 by timmi             #+#    #+#             */
/*   Updated: 2024/06/21 11:27:33 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int	main (void)
{
	int	n1;
	int	n2;

	n1 = 27;
	n2 = 42;
	
	ft_swap(&n1, &n2);

	printf("n1 = %d, n2 = %d", n1, n2);

	return(0);
}
*/