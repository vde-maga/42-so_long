/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:02:34 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 16:16:04 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_map_check(t_game *game)
{
	if (ft_valid_format(game) == 1)
	{
		ft_error(game, INVALID_FORMAT);
		return (1);
	}
	if (ft_check_tiles(game) == 1)
	{
		ft_error(game, INVALID_TILE);
		return (1);
	}
	if (ft_check_invalid_requirements(game) == 1)
		return (1);
	if (ft_is_covered_by_walls(&game->map) == 1)
	{
		ft_error(game, MAP_NOT_CLOSED);
		return (1);
	}
	if (ft_check_path(game) == 1)
	{
		ft_error(game, EXIT_BLOCK);
		return (1);
	}
	return (0);
}
