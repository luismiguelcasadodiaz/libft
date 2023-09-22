/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/22 19:27:59 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char			*src;
	unsigned char	*num;

	if (argc != 3)
		printf("Usage ./test_ft_strchr src num");
	else
	{
		num = (unsigned char *)argv[2];
		src = argv[1];
		printf("src = >%s<, ", src);
		printf("mine >%s<, ", ft_strchr(src, *num));
		printf("yours  >%s<\n", strchr(src, *num));
		printf("src = >%s<, ", src);
		printf("mine >%s<, ", ft_strchr(src, '\0'));
		printf("yours  >%s<\n", strchr(src, '\0'));
	}
	return (0);
}
/*
		printf("src = >%s<, ", (char *)((void *)0));
		printf("mine >%s<, ", ft_strchr((char *)((void *)0), *num));
		printf("yours  >%s<\n", strchr((char *)((void *)0), *num));
		*/
