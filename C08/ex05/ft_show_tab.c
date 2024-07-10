/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:59:39 by timmi             #+#    #+#             */
/*   Updated: 2024/07/10 10:42:06 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		temp;

	temp = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
	else
	{
		ft_putchar(temp + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
	write(1, &i, 1);
}
