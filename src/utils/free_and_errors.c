/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitez <sbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:40:27 by sbenitez          #+#    #+#             */
/*   Updated: 2025/10/18 22:44:45 by sbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

void	ft_print_error(int error)
{
	ft_putstr_fd("Error: ", 2);
	if (error == 1)
		ft_putstr_fd("Invalid map file extension.\n", 2);
	else if (error == 2)
    	ft_putstr_fd("Invalid texture path\n", 2);
	else if (error == 3)
		ft_putstr_fd("Invalid RGB color value (must be 0-255)\n", 2);
	else if (error == 4)
		ft_putstr_fd("Missing configuration elements\n", 2);
	else if (error == 5)
		ft_putstr_fd("Invalid map format\n", 2);
	else if (error == 6)
		ft_putstr_fd("Invalid number of players\n", 2);
	else if (error == 7)
		ft_putstr_fd("Map not closed by walls\n", 2);
}

void	ft_free_game(t_game *game)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(game->textures[i]);
		i++;
	}
	i = 0;
	if (game->map)
	{
		while (game->map[i])
			free(game->map[i++]);
		free(game->map);
	}
	free(game->player);
}
