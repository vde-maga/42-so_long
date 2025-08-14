/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:27:16 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/14 16:13:26 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_blank_grid(t_game *game)
{
	int		i;
	char	**grid;

	i = 0;
	grid = (char **)ft_calloc((game->map.lines + 1), sizeof(char *));
	if (!grid)
	{
		ft_error(game, MALLOC_ERROR);
		return (NULL);
	}
	while (i < game->map.lines)
	{
		grid[i] = ft_strdup(game->map.map[i]);
		if (!grid[i])
		{
			ft_free_game_map(grid);
			ft_error(game, MALLOC_ERROR);
			return (NULL);
		}
		i++;
	}
	grid[game->map.lines] = NULL;
	return (grid);
}

int	ft_flood_fill(t_map *map, t_point curr, char **sol_grid,
		int found_and_collected[2])
{
	if (curr.x < 0 || curr.x >= map->columns || curr.y < 0
		|| curr.y >= map->lines)
		return (1);
	if (sol_grid[curr.y][curr.x] == '1')
		return (1);
	if (sol_grid[curr.y][curr.x] == 'C')
		found_and_collected[0]++;
	else if (sol_grid[curr.y][curr.x] == 'E')
		found_and_collected[1] = 1;
	sol_grid[curr.y][curr.x] = '1';
	ft_flood_fill(map, (t_point){curr.x + 1, curr.y}, sol_grid,
		found_and_collected);
	ft_flood_fill(map, (t_point){curr.x - 1, curr.y}, sol_grid,
		found_and_collected);
	ft_flood_fill(map, (t_point){curr.x, curr.y + 1}, sol_grid,
		found_and_collected);
	ft_flood_fill(map, (t_point){curr.x, curr.y - 1}, sol_grid,
		found_and_collected);
	return ((found_and_collected[0] == map->collectibles)
		&& found_and_collected[1]);
}

int	ft_check_path(t_game *game)
{
	char		**sol_grid;
	static int	found_and_collected[2] = {0, 0};
	int			valid;

	sol_grid = ft_blank_grid(game);
	if (!sol_grid)
	{
		ft_error(game, MALLOC_ERROR);
		return (1);
	}
	valid = ft_flood_fill(&game->map, game->map.player_pos, sol_grid,
			found_and_collected);
	ft_free_game_map(sol_grid);
	if (!valid)
		ft_error(game, EXIT_BLOCK);
	return (!valid);
}
