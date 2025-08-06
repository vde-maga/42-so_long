/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/06 19:55:37 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# include "error_messages.h"
# include "game.h"
# include "get_next_line.h"
# include "libft.h"


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


// ---------------------- Game Logic ---------------------------------------------
// Initialize Game Struct
t_game	ft_init_game(void);



// Errors
void	ft_error(t_game *game, char *error_msg);


#endif