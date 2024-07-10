/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:40:33 by timmi             #+#    #+#             */
/*   Updated: 2024/07/10 10:41:08 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	size;

	size = 0;
	while (*c)
	{
		size++;
		c++;
	}
	return (size);
}

char	*ft_strdup(char *c)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(ft_strlen(c) + 1);
	if (copy == NULL)
		return (NULL);
	while (*c)
	{
		copy[i] = *c;
		c++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}