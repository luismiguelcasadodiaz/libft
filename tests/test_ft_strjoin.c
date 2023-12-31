/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/29 10:08:15 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char	*pre;
	char	*suf;

	if (argc != 3)
		printf("Usage ./test_ft_strjoin pre suf");
	else
	{
		pre = argv[1];
		suf = pre + 20;
		printf("pre = >%s<, ", pre);
		printf("suf = >%s<, ", suf + 20);
		printf("substr >%s<\n", ft_strjoin(suf, pre));
	}
	return (0);
}
/*
		printf("big = >%s<, ", (char *)((void *)0));
		printf("mine >%s<, ", ft_strnstr((char *)((void *)0), *num));
		printf("yours  >%s<\n", strnstr((char *)((void *)0), *num));
		*/
