/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_first_tile.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:30:45 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 17:57:27 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_first_player_tile(t_game *game)
{
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.player,
		TILE_SIZE * game->map.player_pos.x, TILE_SIZE * game->map.player_pos.y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.wall, 0,
		0);
}
