/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:55:51 by timmi             #+#    #+#             */
/*   Updated: 2024/06/27 16:05:41 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	n;

	i = 0;
	number = 0;
	n = 0;
	while (str[i] == ' '
		|| (str[i] >= 9 && str[i] <= 13)
		|| (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (n % 2 != 0)
		number = -number;
	return (number);
}
/*
int	main(void)
{
	char	c[] = " -+++-----23";
	char	c2[] = "  i34";

	printf("%d", ft_atoi(c));
	printf("\n");
}
*/
