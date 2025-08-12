/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:34:56 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/12 16:09:21 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_draw_new_player_pos(t_game *game)
{
	char	*moves_str;

	game->moves++;
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.player, TILE_SIZE * game ->map.player_pos.x, TILE_SIZE * game->map.player_pos.y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.wall, 0, 0);
	moves_str = ft_itoa(game->moves);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 32, 10, 1, moves_str);
	free(moves_str);
}

void	ft_update_behind_tile(t_game *game)
{
	if (ft_current_tile_is_exit(game) == 1)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.exit, TILE_SIZE * game->map.player_pos.x, TILE_SIZE * game->map.player_pos.y);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.floor, TILE_SIZE * game->map.player_pos.x, TILE_SIZE * game->map.player_pos.y);
}

void	ft_behaviour_of_new_tile(t_game *game)
{
	if (ft_current_tile_is_collectible(game) == 1)
	{
		game->map.map[game->map.player_pos.y][game->map.player_pos.x] = '0';
		game->map.collectibles--;
		return;
	}
	if (ft_current_tile_is_exit(game) == 1 && game->map.collectibles == 0)
	{
		write(1, "Congratulations! You Won!", 25);
		ft_exit_game(game);
	}
}

void	ft_update_player_pos(t_game *game, char c, int length)
{
	if (c == 'h')
	{
		if (game->map.map[game->map.player_pos.y][game->map.player_pos.x + length] == '1')
			return ;
		ft_update_behind_tile(game);
		game->map.player_pos.x = game->map.player_pos.x + length;
	}
	else if (c == 'v')
	{
		if (game->map.map[game->map.player_pos.y + length][game->map.player_pos.x] == '1')
			return;
		ft_update_behind_tile(game);
		game->map.player_pos.y = game->map.player_pos.y + length;
	}
	ft_behaviour_of_new_tile(game);
	ft_draw_new_player_pos(game);
}