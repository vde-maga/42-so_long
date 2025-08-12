/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_textures.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:05:55 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/12 00:37:12 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_render_textures(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.lines)
	{
		j = 0;
		while (j < game->map.columns)
		{
			if (game->map.map[i][j] == '1')
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.wall, TILE_SIZE * j, TILE_SIZE * i);
		else if (game->map.map[i][j] == 'c' || game->map.map[i][j] == 'C')
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.collectible, TILE_SIZE * j, TILE_SIZE * i);
		else if (game->map.map[i][j] == 'c' || game->map.map[i][j] == 'C')
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.collectible, TILE_SIZE * j, TILE_SIZE * i);
		else if (game->map.map[i][j] == 'e' || game->map.map[i][j] == 'E')
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.exit, TILE_SIZE * j, TILE_SIZE * i);
		else
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.floor, TILE_SIZE * j, TILE_SIZE * i);

		}
		i++;
	}
	ft_put_first_player_tile(game);
}