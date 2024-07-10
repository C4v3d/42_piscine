/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:49:28 by timmi             #+#    #+#             */
/*   Updated: 2024/06/28 11:10:07 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb > 1)
	{
		n = nb - 1;
		while (n != 1)
		{
			nb *= n;
			n--;
		}
		return (nb);
	}
	else if (nb < 0)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
}
*/
