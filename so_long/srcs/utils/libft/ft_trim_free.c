/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:56:19 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/06 20:03:44 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
			dest[i++] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}

char	*trim_free(char *s1, char *set)
{
	size_t	begin;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	begin = 0;
	while (s1[begin] != '\0' && ft_strchr(set, s1[begin]) != NULL)
		begin += 1;
	end = ft_strlen(s1 + begin);
	while (end > begin && ft_strchr(set, s1[(begin + end) - 1]) != NULL)
		end -= 1;
	trimmed_str = malloc((end + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	ft_strncpy(trimmed_str, (s1 + begin), end);
	free(s1);
	return (trimmed_str);
}