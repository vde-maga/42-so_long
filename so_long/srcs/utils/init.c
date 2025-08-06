/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/06 22:01:27 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	ft_init_game(void)
{
	t_game	game;

	game = t_game{0};
	// game.map.map = NULL;
	// game.map.lines = 0;
	// game.map.columns = 0;
	// game.map.collectibles = 0;
	// game.map.exit = 0;
	// game.map.player = 0;
	// game.tiles.wall = NULL;
	// game.tiles.floor = NULL;
	// game.tiles.player = NULL;
	// game.tiles.collectible = NULL;
	// game.tiles.exit = NULL;
	// game.moves = -1;
	return (game);
}

