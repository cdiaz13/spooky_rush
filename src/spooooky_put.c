/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 12:48:25 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 19:25:09 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

//Put map in strout
void	ft_put_map(t_map	*map_v)
{
	int		i;
	int		k;

	i = 1;
	while (i < 5)
	{
		k = 1;
		while (k < 5)
		{
			if (map_v->map[i][k] != '0')
				write(1, &map_v->map[i][k], 1);
			if (k != 4)
				write(1, " ", 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}

}
