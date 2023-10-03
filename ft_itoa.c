/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/03 20:49:07 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	add_digit(char c, size_t i, char **str, size_t *str_size)
{
	char	*new_str;
	size_t	k;

	k = i;
	new_str = (char *)malloc((*str_size + 1) * sizeof(char));
	if (new_str)
	{
		ft_memcpy(new_str, *str, *str_size);
		new_str[0] = c;
		free(*str);
		*str = new_str;
		k = k + 1;
	}
	else
		*str = NULL;
}

static void	aux_itoa(int n, size_t *i, char **str, size_t *str_size)
{
	char	num;

	if (9 < n)
	{
		aux_itoa(n / 10, &(++i), str, str_size);
		num = 48 + n % 10;
		add_digit(num, &i, &(*str), str_size);
	}
	else
	{
		num = 48 + n % 10;
		add_digit(num, &i, &(*str), str_size);
	}
	if (n < -9)
		aux_itoa(n / 10, *(++i), str, str_size);
	else if (-9 <= n && n <= 0)
	{
		num = 48 + (-n % 1);
		add_digit(num, &i, &(*str), str_size);
		add_digit('-', &i, &(*str), str_size);
	}
}

/* ft_itoa() allocates (with malloc(3)) and returns a strings representing    */
/* the integer received as an argument.                                       */
/* Negative numbers must be handlepointer                                .    */
/*                                                                            */
/* GETS                                                                       */
/*  n: the integer to convert                                                 */
/*                                                                            */
/* RETURNS                                                                    */
/*   The string representing the intege                                       */
/*   NULL if memory allocation fails.                                         */
/* OPERATION                                                                  */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* PROBLEMS I GOT                                                             */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
char	*ft_itoa(int n)
{
	char	*result;
	size_t	result_size;
	size_t	i;

	if (n == 0)
	{
		result = (char *)malloc(2 * sizeof(char));
		result[0] = '0';
		result[1] = '\0';
	}
	else
	{
		i = 0;
		result = (char *)malloc(1 * sizeof(char));
		result[0] = '\0';
		result_size = 1;
		aux_itoa(n, &i, &result, &result_size);
	}
	return (result);
}
