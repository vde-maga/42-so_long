/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:41:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/23 16:54:40 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	const char	str[] = "Dead Dead Demon's Dededede Destruction"; 
	char		*result;

	char c = 'D';

	result = ft_strrchr(str, c);
	if (result)
	{
		printf("Última ocorrência do caractere '%c': %s\n", c, result);
	}
	else
	{
		printf("Caractere '%c' não encontrado na string.\n", c);
	}

	c = '\0';
	result = ft_strrchr(str, c);
	if (result)
	{
		printf("Terminador nulo encontrado no final da string.\n");
	}
	return (0);
}
*/
