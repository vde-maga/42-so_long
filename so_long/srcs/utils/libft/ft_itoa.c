/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:57:47 by vde-maga          #+#    #+#             */
/*   Updated: 2025/08/12 15:41:56 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	ft_int_to_char(unsigned int number, char *nbr, int i)
{
	while (number > 0)
	{
		nbr[i] = '0' + (number % 10);
		number = number / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int				i;
	char			*nbr;
	unsigned int	number;

	i = ft_int_len(n);
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (NULL);
	nbr[i--] = '\0';
	if (n == 0)
	{
		nbr[0] = '0';
	}
	if (n < 0)
	{
		nbr[0] = '-';
		n = n * -1;
	}
	number = n;
	ft_int_to_char(number, nbr, i);
	return (nbr);
}
/*
int	main(void)
{
	int		test_cases[] = {0, 1, -1, 42, -42, 123456, -7890, INT_MAX, INT_MIN};
	int		num_tests;
	char	*result;
	int		i;

	num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
	printf("Teste da função ft_itoa:\n\n");
	i = 0;
	while (i < num_tests)
	{
		result = ft_itoa(test_cases[i]);
		if (!result)
		{
			printf("Erro: alocação falhou para ft_itoa(%d)\n", test_cases[i]);
		}
		else
		{
			printf("ft_itoa(%d) = %s\n", test_cases[i], result);
			free(result);
		}
		i++;
	}
	return (0);
}
*/