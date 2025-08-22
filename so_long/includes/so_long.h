/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/20 15:08:35 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx-linux/mlx.h"
# include "error_messages.h"
# include "game.h"
# include "get_next_line.h"
# include "keys.h"
# include "libft.h"
# include "textures.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// ---------------------- Checkers ---------------------------------------------
// Argument Checkers
int		ft_args_check(int argc, char **argv);

// Map Checkers
int		ft_map_check(t_game *game);
int		ft_valid_format(t_game *game);
int		ft_check_tiles(t_game *game);
int		ft_check_invalid_requirements(t_game *game);
int		ft_is_covered_by_walls(t_map *map);
int		ft_valid_tile_input(char c);
int		ft_check_path(t_game *game);
// Current Tile Check
int		ft_current_tile_is_collectible(t_game *game);
int		ft_current_tile_is_exit(t_game *game);

// ---------------------- Engine Logic -----------------------------------------
void	ft_hook_and_run(t_game *game);

// ---------------------- Map Logic --------------------------------------------
// Get File of Argument from Arguments
void	ft_get_map(char *map_file, t_game *game);
// Display Map on the Screen
void	ft_render_map(t_game *game);

// ---------------------- Init -------------------------------------------------
// Initialize Game Struct
t_game	ft_init_game(void);
// Initialize MLX
int		ft_init_mlx(t_game *game);
// Initialize Game Textures
void	ft_init_textures(t_game *game);

// ---------------------- Textures ---------------------------------------------
void	ft_render_textures(t_game *game);
// Check for Errors In Textures
void	ft_check_errors_in_textures(t_game *game);

// ---------------------- Player -----------------------------------------------
void	ft_put_first_player_tile(t_game *game);
void	ft_update_player_pos(t_game *game, char c, int length);

// ---------------------- Error ------------------------------------------------
void	ft_error(t_game *game, char *error_msg);
void	ft_free_game_map(char **map);
// ---------------------- End Game ---------------------------------------------
int		ft_exit_game(t_game *game, int win);
void	ft_free_game(t_game *game);

#endif
