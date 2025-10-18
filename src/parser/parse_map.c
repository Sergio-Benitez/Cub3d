/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitez <sbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:13:56 by sbenitez          #+#    #+#             */
/*   Updated: 2025/10/18 23:40:06 by sbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

int	ft_parse_map(int fd, t_game *game)
{
	int		map_started;
	char	*line;

	map_started = 0;
	line = get_next_line(fd);
	while (line)
	{
		if (!map_started && !ft_is_empty(line))
		{
			if (ft_is_texture(line))
			{
				printf("texture\n");
				(void)game;
			}
				//				ft_parse_texture(line, game); //crear
		}
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
