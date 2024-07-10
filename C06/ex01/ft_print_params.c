/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:51:24 by timmi             #+#    #+#             */
/*   Updated: 2024/07/01 14:00:44 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*ptr;

	i = 1;
	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
