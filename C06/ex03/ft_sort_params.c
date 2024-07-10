/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timmi <timmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:03:26 by timmi             #+#    #+#             */
/*   Updated: 2024/07/02 09:49:42 by timmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>



int	main(int argc, char *argv[])
{
	int i;
	int j;
	char *ptr;
	int value[argc - 1];

	i = 1;
	j = 0;
	while (i < argc)
	{
		value[j] = *ptr;
		printf("%d", value[j]);
		j++;
		i++;
	}
}