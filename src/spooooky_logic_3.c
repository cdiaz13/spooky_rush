/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_logic_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:26:53 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 19:27:05 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

int	ft_paste(t_map	*map_v, char *paste, int i, int j)
{
	int	k;
	static int	count;

	k = -1;
	while (++k < 4)
	{
		map_v->map[i][j] = paste[k];
		j++;
	}
	//ft_put_map(map_v);
	return (ft_check_rows_left(map_v));
}

int	ft_force_logic(t_map	*map_v)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	while (++i < 24)
	{
		if (ft_paste(map_v, map_v->opt[i], 1, 1))
			return (0);
		j = -1;
		while (++j < 24)
		{
			if (ft_paste(map_v, map_v->opt[j], 2, 1))
				return (0);
			k = -1;
			while (++k < 24)
			{
				if (ft_paste(map_v, map_v->opt[k], 3, 1))
					return (0);
				l = -1;
				while (++l < 24)
					if (ft_paste(map_v, map_v->opt[l], 4, 1))
						return (0);
			}
		}
	}
	return (1);
}
