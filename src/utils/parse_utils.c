/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitez <sbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:59:40 by sbenitez          #+#    #+#             */
/*   Updated: 2025/10/18 23:46:50 by sbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

int	ft_is_empty(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (1);
	while (line[i])
	{
		if (!ft_is_space(line[i]) && line[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_texture(char *line)
{
	while (ft_is_space(*line))
		line++;
	if (ft_strncmp(line, "NO", 2) == 0)
		return (1);
	if (ft_strncmp(line, "SO", 2) == 0)
		return (1);
	if (ft_strncmp(line, "WE", 2) == 0)
		return (1);
	if (ft_strncmp(line, "EA", 2) == 0)
		return (1);
	return (0);
}
