/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:50:10 by timmi             #+#    #+#             */
/*   Updated: 2024/07/03 17:13:38 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int nb, int j)
{
	if (nb % j == 0)
		return (0);
	else
	{
		if (j * j > nb)
			return (1);
		else
			return (check(nb, j + 1));
	}
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
		return (check(nb, i));
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(99));
	return (0);
}
