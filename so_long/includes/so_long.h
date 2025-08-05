/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/05 18:02:43 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# include "error_messages.h"
# include "game.h"

void	ft_args_check(int argc, char **argv);
t_game	ft_init_game(void);


// Errors
void	ft_error(t_game *game, char *error_msg);


// LIBFT
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
int	ft_strncmp(char *s1, char *s2, size_t n);

#endif