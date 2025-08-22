/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook_and_run.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 23:10:25 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/20 14:02:24 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_key_press(int key, t_game *game)
{
	if (key == ESC || key == Q)
		ft_exit_game(game, 0);
	else if (key == W || key == UP)
		ft_update_player_pos(game, 'v', -1);
	else if (key == A || key == LEFT)
		ft_update_player_pos(game, 'h', -1);
	else if (key == S || key == DOWN)
		ft_update_player_pos(game, 'v', 1);
	else if (key == D || key == RIGHT)
		ft_update_player_pos(game, 'h', 1);
	return (0);
}

void	ft_hook_and_run(t_game *game)
{
	mlx_hook(game->win_ptr, KEY_PRESS, KEY_PRESS_MASK, ft_key_press, game);
	mlx_hook(game->win_ptr, DESTROY_NOTIFY,
		STRUCTURE_NOTIFY_MASK, ft_exit_game, game);
	mlx_loop(game->mlx_ptr);
}
