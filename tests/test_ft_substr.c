/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/28 18:34:19 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char	*str;
	size_t	start;
	size_t	len;

	if (argc != 4)
		printf("Usage ./test_ft_substr str start len");
	else
	{
		len = (size_t)ft_atoi(argv[3]);
		str = argv[1];
		start = ft_atoi(argv[2]);
		printf("str = >%s<, ", str);
		printf("substr >%s<\n", ft_substr(str, start, len));
		printf("str = >%s<, ", str);
		printf("substr >%s<\n", ft_substr(str, start, 0));
		printf("substr >%s<\n", ft_substr((char *)((void *)0), start, 0));
	}
	return (0);
}
/*
		printf("big = >%s<, ", (char *)((void *)0));
		printf("mine >%s<, ", ft_strnstr((char *)((void *)0), *num));
		printf("yours  >%s<\n", strnstr((char *)((void *)0), *num));
		*/
