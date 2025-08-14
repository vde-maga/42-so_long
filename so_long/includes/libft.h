/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 16:17:25 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_trim_free(char *s1, char *set);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_itoa(int n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);

#endif
