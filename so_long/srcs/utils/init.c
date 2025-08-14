/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 19:02:55 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	ft_init_game(void)
{
	t_game	game;

	game.map.map = NULL;
	game.map.lines = 0;
	game.map.columns = 0;
	game.map.collectibles = 0;
	game.map.exit = 0;
	game.map.player = 0;
	game.map.player_pos.x = 0;
	game.map.player_pos.y = 0;
	game.mlx_ptr = NULL;
	game.win_ptr = NULL;
	game.tiles.wall = NULL;
	game.tiles.floor = NULL;
	game.tiles.player = NULL;
	game.tiles.collectible = NULL;
	game.tiles.exit = NULL;
	game.moves = -1;
	return (game);
}

int	ft_init_mlx(t_game *game)
{
	game->mlx_ptr = mlx_init();
	if (!game->mlx_ptr)
	{
		ft_error(game, MLX_INIT_ERROR);
		return (1);
	}
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->map.columns * TILE_SIZE,
			game->map.lines * TILE_SIZE, "so_long");
	if (!game->win_ptr)
	{
		ft_error(game, MLX_WINDOW_ERROR);
		return (1);
	}
	return (0);
}

void	ft_init_textures(t_game *game)
{
	int	texture_size;

	texture_size = TILE_SIZE;
	game->tiles.wall = mlx_xpm_file_to_image(game->mlx_ptr,
			WALL_TEXTURE, &texture_size, &texture_size);
	game->tiles.floor = mlx_xpm_file_to_image(game->mlx_ptr,
			FLOOR_TEXTURE, &texture_size, &texture_size);
	game->tiles.player = mlx_xpm_file_to_image(game->mlx_ptr,
			PLAYER_TEXTURE, &texture_size, &texture_size);
	game->tiles.collectible = mlx_xpm_file_to_image(game->mlx_ptr,
			COLLECTIBLE_TEXTURE, &texture_size, &texture_size);
	game->tiles.exit = mlx_xpm_file_to_image(game->mlx_ptr,
			EXIT_TEXTURE, &texture_size, &texture_size);
	ft_check_errors_in_textures(game);
}
