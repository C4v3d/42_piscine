/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:40:09 by timmi             #+#    #+#             */
/*   Updated: 2024/07/01 13:50:51 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*ptr;
	int		i;

	ptr = argv[0];
	i = 0;
	while (i < argc)
	{
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
