/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/06 17:05:36 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

typedef struct s_point {
	int	x;
	int	y;
}				t_point;

typedef struct s_map {
	char			**map;
	int				lines;
	int				columns;
	int				collectibles;
	int				exit;
	int				player;
	t_point			player_pos;
}				t_map;

typedef struct s_tiles {
	void	*wall;
	void	*floor;
	void	*player;
	void	*collectible;
	void	*exit;
}				t_tiles;

typedef struct s_game {
	t_map		map;
	void		*mlx_ptr;
	void		*win_ptr;
	t_tiles		tiles;
	int			moves;
}				t_game;

#endif