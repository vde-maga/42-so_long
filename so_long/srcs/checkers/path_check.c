/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:27:16 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/19 19:02:06 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_copy_grid(t_game *game)
{
	int		i;
	char	**new_grid;

	i = 0;
	new_grid = (char **)ft_calloc((game->map.lines + 1), sizeof(char *));
	if (!new_grid)
	{
		ft_error(game, MALLOC_ERROR);
		return (NULL);
	}
	while (i < game->map.lines)
	{
		new_grid[i] = ft_strdup(game->map.map[i]);
		if (!new_grid[i])
		{
			ft_free_game_map(new_grid);
			ft_error(game, MALLOC_ERROR);
			return (NULL);
		}
		i++;
	}
	new_grid[game->map.lines] = NULL;
	return (new_grid);
}

int	ft_flood_fill(t_map *map, t_point curr, char **copied_grid,
		int collected_and_exit[2])
{
	if (curr.x < 0 || curr.x >= map->columns || curr.y < 0
		|| curr.y >= map->lines)
		return (1);
	if (copied_grid[curr.y][curr.x] == '1')
		return (1);
	if (copied_grid[curr.y][curr.x] == 'C')
		collected_and_exit[0]++;
	else if (copied_grid[curr.y][curr.x] == 'E')
		collected_and_exit[1] = 1;
	copied_grid[curr.y][curr.x] = '1';
	ft_flood_fill(map, (t_point){curr.x + 1, curr.y}, copied_grid,
		collected_and_exit);
	ft_flood_fill(map, (t_point){curr.x - 1, curr.y}, copied_grid,
		collected_and_exit);
	ft_flood_fill(map, (t_point){curr.x, curr.y + 1}, copied_grid,
		collected_and_exit);
	ft_flood_fill(map, (t_point){curr.x, curr.y - 1}, copied_grid,
		collected_and_exit);
	if (collected_and_exit[0] == map->collectibles && collected_and_exit[1])
		return (1);
	else
		return (0);
}

int	ft_check_path(t_game *game)
{
	char		**copied_grid;
	static int	collected_and_exit[2] = {0, 0};
	int			is_valid;

	copied_grid = ft_copy_grid(game);
	if (!copied_grid)
	{
		ft_error(game, MALLOC_ERROR);
		return (1);
	}
	is_valid = ft_flood_fill(&game->map, game->map.player_pos, copied_grid,
			collected_and_exit);
	ft_free_game_map(copied_grid);
	if (!is_valid)
	{
		ft_error(game, EXIT_BLOCK);
		return (1);
	}
	return (0);
}
