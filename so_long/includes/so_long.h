/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/11 17:27:34 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# include "libft.h"
# include "get_next_line.h"
# include "error_messages.h"
# include "game.h"
# include "textures.h"
# include "../minilibx-linux/mlx.h"


// ---------------------- Checkers ---------------------------------------------
// Argument Checkers
int	ft_args_check(int argc, char **argv);

// Map Checkers
int	ft_map_check(t_game *game);
int	ft_valid_format(t_game *game);
int	ft_check_tiles(t_game *game);
int	ft_check_invalid_requirements(t_game *game);
int	ft_is_covered_by_walls(t_map *map);
int	ft_valid_tile_input(char c);

// ---------------------- Map Logic ---------------------------------------------
// Get File of Argument from Arguments
void	ft_get_map(char *map_file, t_game *game);
// Display Map on the Screen
void	ft_render_map(t_game *game);

// ---------------------- Init -------------------------------------------------
// Initialize Game Struct
t_game	ft_init_game(void);
// Initialize MLX
int	ft_init_mlx(t_game *game);
// Initialize Game Textures
void	ft_init_textures(t_game *game);

// ---------------------- Textures -----------------------------------------------
void	ft_render_textures(t_game *game);
// Check for Errors In Textures
void	ft_check_errors_in_textures(t_game *game);

// ---------------------- Error -------------------------------------------------
void	ft_error(t_game *game, char *error_msg);

#endif
