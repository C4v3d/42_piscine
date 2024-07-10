/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:09:36 by timmi             #+#    #+#             */
/*   Updated: 2024/06/20 15:18:24 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_numbers(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				display_numbers(n1, n2, n3);
				if (n1 != '7')
				{
					write(1, ", ", 2);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
