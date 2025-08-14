/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:28:14 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/13 16:04:02 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	result;
	void	*p;

	result = nmemb * size;
	p = malloc(result);
	if (!p)
	{
		return (NULL);
	}
	ft_memset(p, 0, result);
	return (p);
}
/*
void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = value;
		i++;
	}
	return (str);
}

int	main(void)
{
	void	*ptr1;
	size_t	i;
	void	*ptr2;


	ptr1 = ft_calloc(5, sizeof(int));
	i = 0;
	printf("Teste 1 (inteiros): ");
	if (ptr1 != NULL)
	{
		while (i < 5)
		{
			printf("%d ", *((int *)ptr1 + i));
			i++;
		}
		printf("\n");
		free(ptr1);
	}
	else
	{
		printf("Alocação falhou.\n");
	}

	ptr2 = ft_calloc(10, sizeof(char));
	printf("Teste 2 (caracteres): ");
	i = 0;
	if (ptr2 != NULL)
	{
		while (i < 10)
		{
			printf("%c", *((char *)ptr2 + i));
			i++;
		}
		printf("\n");
		free(ptr2);
	}
	else
	{
		printf("Alocação falhou.\n");
	}
	return (0);
}
*/
