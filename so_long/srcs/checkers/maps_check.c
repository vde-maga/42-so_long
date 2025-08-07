/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:44:23 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/07 17:04:57 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_valid_format(t_game *game)
{
	int	length;
	int	i;

	length = game->map.columns;
	i = 0;
	while (game->map.map[i] != NULL)
	{
		if (length != ft_strlen(game->map.map[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_tiles(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.lines)
	{
		j = 0;
		while (j < game->map.columns)
		{
			if (ft_valid_tile_input(game->map.map[i][j]) == 1)
				return (1);
			if (game->map.map[i][j] == 'e' || game->map.map[i][j] == 'E')
				game->map.exit = game->map.exit + 1;
			else if (game->map.map[i][j] == 'c' || game->map.map[i][j] == 'C')
				game->map.collectibles = game->map.collectibles + 1;
			else if (game->map.map[i][j] == 'p' || game->map.map[i][j] == 'P')
			{
				game->map.player = game->map.player + 1;
				game->map.player_pos = (t_point){j, i};
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_invalid_requirements(t_game *game)
{
	if (game->map.exit == 0 || game->map.exit > 1)
	{
		ft_error(game, INVALID_NBR_EXITS);
		return (1);
	}
	if (game->map.collectibles == 0)
	{
		ft_error(game, NO_COLLECTIBLES);
		return (1);
	}
	if (game->map.player == 0 || game->map.player > 1)
	{
		ft_error(game, INVALID_NBR_PLAYER);
		return (1);
	}
	return (0);
}

int	ft_is_covered_by_walls(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->lines)
	{
		if (map->map[i][0] != '1' || map->map[i][map->columns - 1] != '1')
			return (1);
		i++;
	}
	i = 0;
	while (i < map->columns)
	{
		if (map->map[0][i] != '1' || map->map[map->lines - 1][i] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	ft_valid_tile_input(char c)
{
	if (c == 'E' || c == 'e')
		return (0);
	else if (c == 'C' || c == 'c')
		return (0);
	else if (c == 'P' || c == 'p')
		return (0);
	else if (c == '0' || c == '1')
		return (0);
	else
		return (1);
}
