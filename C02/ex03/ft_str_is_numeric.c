/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:37:33 by timmi             #+#    #+#             */
/*   Updated: 2024/06/24 10:47:13 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0' && x != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d", ft_str_is_numeric("3098a"));
	return (0);
}
*/
