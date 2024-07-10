/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:31:11 by timmi             #+#    #+#             */
/*   Updated: 2024/06/27 15:57:16 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	binary_to_decimal(int nbr)
{
	int r;

	r = 0;
	while (nbr > 1)
	{
		r = r * 10 + (nbr % 2);
		nbr /= 2;
	}
	printf("%d", r);
}	

int	main(void)
{
	binary_to_decimal(100);
}
