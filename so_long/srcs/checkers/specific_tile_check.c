/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific_tile_check.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:02:25 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/12 16:06:56 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_current_tile_is_collectible(t_game *game)
{
	if (game->map.map[game->map.player_pos.y][game->map.player_pos.x] == 'C' || game->map.map[game->map.player_pos.y][game->map.player_pos.x] == 'c')
		return (1);
	return (0);
}

int	ft_current_tile_is_exit(t_game *game)
{
	if (game->map.map[game->map.player_pos.y][game->map.player_pos.x] == 'E' || game->map.map[game->map.player_pos.y][game->map.player_pos.x] == 'e')
		return (1);
	return (0);
}