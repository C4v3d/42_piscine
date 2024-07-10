/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:57:26 by timmi             #+#    #+#             */
/*   Updated: 2024/07/01 12:07:36 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb, int j)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % j == 0)
		return (0);
	else
	{
		if (j * j > nb)
			return (1);
		else
			return (is_prime(nb, j + 1));
	}
}

int	next_prime(int nb, int j)
{
	if (nb % j == 0)
	{
		return (next_prime(nb + 1, 2));
	}
	else
	{
		if (j * j > nb)
		{
			return (nb);
		}
		else
			return (next_prime(nb, j + 1));
	}
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (is_prime(nb, i))
		return (nb);
	else
	{
		if (nb == 0 || nb == 1 || nb < 0)
			return (2);
		return (next_prime(nb, i));
	}
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_find_next_prime(91));
}
*/