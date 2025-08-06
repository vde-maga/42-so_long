/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:51:49 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/06 17:04:03 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "42Porto";
	char	str2[] = "42Lisboa";
	size_t	n;
	int		result;

	n = 2;
	result = ft_strncmp(str1, str2, n);
	printf("String 1: %s\n", str1);
	printf("String 2: %s\n", str2);
	printf("Resultado de ft_strncmp: %d\n", result);
	if (result < 0)
		printf("String 1 é menor que String 2 nos primeiros %zu caracteres.\n",
			n);
	else if (result > 0)
		printf("String 1 é maior que String 2 nos primeiros %zu caracteres.\n",
			n);
	else
		printf("As strings são iguais nos primeiros %zu caracteres.\n", n);
	return (0);
}
*/