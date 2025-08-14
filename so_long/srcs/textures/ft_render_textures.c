/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_textures.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:05:55 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/14 16:25:31 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_draw_tile(t_game *game, int i, int j)
{
	void	*img;
	char	c;

	c = game->map.map[i][j];
	if (c == '1')
		img = game->tiles.wall;
	else if (c == 'c' || c == 'C')
		img = game->tiles.collectible;
	else if (c == 'e' || c == 'E')
		img = game->tiles.exit;
	else
		img = game->tiles.floor;
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img,
		TILE_SIZE * j, TILE_SIZE * i);
}

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
			ft_draw_tile(game, i, j);
			j++;
		}
		i++;
	}
	ft_put_first_player_tile(game);
}
