/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:11:29 by timmi             #+#    #+#             */
/*   Updated: 2024/06/24 10:30:17 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0' && x != 0)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			x = 1;
		}
		else
		{
			x = 0;
		}
		i++;
	}
	return (x);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_alpha("fodfg"));
	return (0);
}
*/
