/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/07 16:12:45 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_args_check(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_error(NULL, INVALID_NBR_ARGS);
		return (1);
	}
	else if (*argv[1] == '\0')
	{
		ft_error(NULL, NULL_MAP);
		return (1);
	}
	return (0);
}
