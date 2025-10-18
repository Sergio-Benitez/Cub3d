/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitez <sbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:17:10 by sbenitez          #+#    #+#             */
/*   Updated: 2025/10/18 22:27:37 by sbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

void	ft_set_game(char *filename)
{
	int		fd;
	int		name_length;
	t_game	game;
	
	ft_memset(&game, 0, sizeof(game));
	name_length = ft_strlen(filename);
	if (name_length < 5 || ft_strncmp(filename + name_length - 4, ".cub", 4))
		return (ft_print_error(1));
	if (access(filename, R_OK))
		perror("Error");
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		perror("Error");
	if (!ft_parse_map(fd, &game)) // crear función
	{
		ft_free_game(&game);
		return ;
	}
}
