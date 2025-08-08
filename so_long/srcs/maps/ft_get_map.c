/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/08 18:00:48 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_valid_filetype(char *map_file)
{
	char	*temp;

	temp = ft_strrchr(map_file, '.');
	if (!temp)
		return (1);
	if (ft_strncmp(".ber", temp, ft_strlen(temp)) == 0)
		return (0);
	else if (ft_strncmp (".BER", temp, ft_strlen(temp)) == 0)
		return (0);
	else
		return (1);
}

void	ft_complete_map(char *map_file, t_game *game)
{
	int	map_file_descriptor;
	int	i;

	map_file_descriptor = open(map_file, O_RDONLY);
	if (map_file_descriptor == -1)
		ft_error(game, FAILED_OPEN_MAP_FILE);
	i = 0;
	while (i < game->map.lines)
	{
		game->map.map[i] = ft_get_next_line(map_file_descriptor);
		i++;
	}
	game->map.map[i] = NULL;
	close(map_file_descriptor);
	i = 0;
	while (i < (game->map.lines))
	{
		game->map.map[i] = ft_trim_free(game->map.map[i], "\n");
		if (!game->map.map[i])
			ft_error(game, MALLOC_ERROR);
		i++;
	}
	game->map.columns = ft_strlen(game->map.map[0]);
}

void	ft_get_nbr_map_lines(char *map_file, t_game *game)
{
	int		lines;
	int		map_file_descriptor;
	char	*temp;

	lines = 0;
	map_file_descriptor = open(map_file, O_RDONLY);
	if (map_file_descriptor == -1)
		ft_error(game, FAILED_OPEN_MAP_FILE);
	temp = ft_get_next_line(map_file_descriptor);
	while (temp)
	{
		lines++;
		free(temp);
		temp = ft_get_next_line(map_file_descriptor);
	}
	if (lines == 0)
		ft_error(game, EMPTY_MAP_FILE);
	game->map.lines = lines;
	close(map_file_descriptor);
}

void	ft_get_map(char *map_file, t_game *game)
{
	if (ft_valid_filetype(map_file) == 1)
		ft_error(game, INVALID_MAP_FILE);
	ft_get_nbr_map_lines(map_file, game);
	game->map.map = (char **)malloc((game->map.lines + 1) * sizeof(char *));
	if (!game->map.map)
		ft_error(game, MALLOC_ERROR);
	ft_complete_map(map_file, game);
}
