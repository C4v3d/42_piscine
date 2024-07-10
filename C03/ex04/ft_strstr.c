/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:39:45 by timmi             #+#    #+#             */
/*   Updated: 2024/06/25 15:12:11 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;
	int match;

	i = 0;
	x = 0;
	match = 0;

	while (str[i])
	{
		if (to_find[x] == str[i])
		{
			match = 1;
			while (to_find[x] && match)
			{
				if (to_find[x] == str[i])
				{
					x++;
					i++;
				}
				else
				{
					x = 0;
					match = 0;
				}
				if (to_find[x] == '\0')
				{
					return("Found");
				}
			}
		}
		i++;
	}
	return ("Not Found");
}

int	main(void)
{
	char	c1[] = "Hello";
	char	c2[] =  "Lorem ipsum doHelor sit amet, consectetur adipiscing elit. Etiam ac urna a purus ornare auctor at eu lorem. Aenean consequat tortor hendHelrerit tortor placerat, in gravida mi sagittis. Morbi ipsum felis, ullamcorper eu orci in, dignissim semper felis. Nullam quis ligula eu leo acHellocumsan molestie sit amet sit amet risus. Integer egestas augue a varius tempor. Duis euismod imperdiet fringilla. Morbi in posuere nisi. Etiam consequat vitae est non venenatis. Aliquam sagittis arcu ac purus ullamcorper, vitae accumsan mauris scelerisque. In at nisi tempor, ullamcorper lorem a, aliquam libero.";

	printf("%s", ft_strstr(c1, c2));
}
