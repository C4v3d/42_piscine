/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:31:17 by timmi             #+#    #+#             */
/*   Updated: 2024/06/25 13:39:10 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	unsigned int n;
	char c1[40] = "Hello ";
	char c2[] = "world!";

	n = 4;
	printf("%s", ft_strncat(c1, c2, n));
}
*/
