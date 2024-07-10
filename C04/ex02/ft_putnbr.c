/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:31:49 by timmi             #+#    #+#             */
/*   Updated: 2024/06/26 16:27:25 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_table_write(char *b)
{
	int	i;

	i = 0;
	while (b[i])
	{
		write(1, &b[i], 1);
		i++;
	}
}

void	ft_make_table(int SIZE, int nb)
{
	char	buffer[SIZE];

	buffer[SIZE] = '\0';
	while (nb > 0)
	{
		buffer[--SIZE] = (nb % 10) + '0';
		nb /= 10;
	}
	ft_table_write(buffer);
}

int	checker(int nb, int done)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		done = 1;
		return (done);
	}
	else if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		done = 1;
		return (done);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		done = 1;
		return (done);
	}
	else
	{
		done = 0;
		return (done);
	}
}

void	ft_putnbr(int nb)
{
	int	size;
	int	temp;
	int	done;

	done = 0;
	done = checker(nb, done);
	if (done == 0)
	{
		size = 0;
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		temp = nb;
		while (temp > 0)
		{
			temp /= 10;
			size++;
		}
		ft_make_table(size, nb);
	}
	else
		return ;
}
/*
int	main(void)
{
	ft_putnbr(2);
}
*/
