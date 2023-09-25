/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 18:39:41 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char	*big;
	char	*lit;
	size_t	len;

	if (argc != 4)
		printf("Usage ./test_ft_strnstr big little len");
	else
	{
		len = (size_t)ft_atoi(argv[3]);
		big = argv[1];
		lit = argv[2];
		printf("big = >%s<, ", big);
		printf("mine >%s<\n", ft_strnstr(big, lit, len));
//		printf("yours  >%s<\n", strnstr(big, lit, len));
		printf("big = >%s<, ", big);
		printf("mine >%s<\n", ft_strnstr(big, lit, '\0'));
//		printf("yours  >%s<\n", strnstr(big, lit, '\0'));
	}
	return (0);
}
/*
		printf("big = >%s<, ", (char *)((void *)0));
		printf("mine >%s<, ", ft_strnstr((char *)((void *)0), *num));
		printf("yours  >%s<\n", strnstr((char *)((void *)0), *num));
		*/
