/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:23:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 17:24:44 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit_game(t_game *game, int win)
{
	char	*last_move;

	if (win == 1)
	{
		game->moves++;
		last_move = ft_itoa(game->moves);
		ft_putstr_fd("Move Number: ", 1);
		ft_putstr_fd(last_move, 1);
		ft_putstr_fd("\n", 1);
		write(1, "Congratulations! You Won!", 25);
		free(last_move);
	}
	ft_free_game(game);
	exit(EXIT_SUCCESS);
	return (0);
}
