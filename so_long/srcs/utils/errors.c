/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/11 17:33:44 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_game_tiles(t_game *game)
{
	if (game->tiles.wall)
		mlx_destroy_image(game->mlx_ptr, game->tiles.wall);
	if (game->tiles.floor)
		mlx_destroy_image(game->mlx_ptr, game->tiles.floor);
	if (game->tiles.player)
		mlx_destroy_image(game->mlx_ptr, game->tiles.player);
	if (game->tiles.collectible)
		mlx_destroy_image(game->mlx_ptr, game->tiles.collectible);
	if (game->tiles.exit)
		mlx_destroy_image(game->mlx_ptr, game->tiles.exit);
}

void	ft_check_errors_in_textures(t_game *game)
{	
	if (!game->tiles.wall)
		ft_error(game, WALL_TEXTURE_ERROR);
	if (!game->tiles.floor)
		ft_error(game, FLOOR_TEXTURE_ERROR);
	if (!game->tiles.player)
		ft_error(game, PLAYER_TEXTURE_ERROR);
	if (!game->tiles.collectible)
		ft_error(game, COLLECTIBLE_TEXTURE_ERROR);
	if (!game->tiles.exit)
		ft_error(game, EXIT_TEXTURE_ERROR);
}

void	ft_free_game_map(char **map)
{
	size_t	i;

	i = 0;
	if (!map)
		return ;
	while (map[i])
	{
		free(map[i]);
		map[i] = NULL;
		i++;
	}
	if (i > 0)
		free(map);
	map = NULL;
}

void	ft_free_game(t_game *game)
{
	if (!game)
		return ;
	ft_free_game_tiles(game);
	if (game->win_ptr)
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	if (game->mlx_ptr)
	{
		mlx_destroy_display(game->mlx_ptr);
		free(game->mlx_ptr);
	}
	if (game->map.map)
		ft_free_game_map(game->map.map);
}

void	ft_error(t_game *game, char *error_msg)
{
	//ft_free_game(game);
	(void)game;
	ft_putstr_fd("Error: ", STDERR_FILENO);
	ft_putstr_fd(error_msg, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
