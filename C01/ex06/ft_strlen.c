/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:09:45 by timmi             #+#    #+#             */
/*   Updated: 2024/06/23 11:37:10 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != 0)
	{
		str++;
		n++;
	}
	return (n);
}
/*
int	main(void)
{
	printf("%d", ft_strlen("Hello World!\n"));
	return (0);
}
*/
