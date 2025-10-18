/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitez <sbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:49:00 by szapata-          #+#    #+#             */
/*   Updated: 2025/10/18 23:35:39 by sbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include "libft/inc/libft.h"
# include "MLX42.h"
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>


typedef struct s_player
{
	double	posx;
	double	posy;
	double	dirx;
	double	diry;
	double	planex;
	double	planey;
	char	init_dir;
}	t_player;

typedef struct s_game
{
	char			*textures[4];
	uint32_t		floor;
	uint32_t		ceiling;
	char			**map;
	int				validation;
	t_player		*player;
	mlx_t			*mlx;
	mlx_image_t		*img;
	mlx_texture_t	*north;
	mlx_texture_t	*south;
	mlx_texture_t	*west;
	mlx_texture_t	*east;
	int				h;
	int				w;
	int				map_w;
	int				map_h;
	double			ray_dir_x;
	double			ray_dir_y;
	double			delta_distx;
	double			delta_disty;
	int				stepx;
	int				stepy;
	double			side_distx;
	double			side_disty;
	int				mapx;
	int				mapy;
	double			wall_dist;
	int				line_h;
	int				draw_start;
	int				draw_end;
	double			wallx;
	int				tex_num;
	int				tex_x;
	int				tex_y;
	int				*texture_buffer[4];
}	t_game;

//////////////////////////////////////////////////////////////////////////////
//
//    *****************
//    *   EXECUTION   *
//    *****************

//    ├── 
//    ├── 
//    ├── 
//    ├── 

//////////////////////////////////////////////////////////////////////////////
//
//    **************
//    *   PARSER   *
//    **************

//    ├── init_game.c

void	ft_set_game(char *filename);

//    ├── parse_map.c

int		ft_parse_map(int fd, t_game *game);

//////////////////////////////////////////////////////////////////////////////
//
//    *************
//    *   UTILS   *
//    *************

//    ├── free_and_errors.c

void	ft_print_error(int error);
void	ft_free_game(t_game *game);

//    ├── parse_utils.c

int		ft_is_empty(char *line);
int		ft_is_texture(char *line);

//    ├── utils.c

int		ft_is_space(char c);
void	ft_free_array(char **array);
int		map_length(char **map);

//    ├── 

#endif