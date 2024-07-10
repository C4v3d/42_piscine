/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:22:27 by timmi             #+#    #+#             */
/*   Updated: 2024/06/28 10:50:27 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power-- > 1)
			nb = nb * temp;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(-5, 3));
}
*/
