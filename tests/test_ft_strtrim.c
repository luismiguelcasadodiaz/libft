/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/29 11:49:39 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char			*src;
	char			*set;

	if (argc != 3)
		printf("Usage ./test_ft_strtrim str set");
	else
	{
		src = argv[1];
		set = argv[2];
		printf("src = >%s<, ", src);
		printf("set = >%s<, ", set);
		printf("tri >%s<\n", ft_strtrim(src, set));
		printf("src = >\\0<, ");
		printf("tri >%s<,\n", ft_strtrim((char *)'\0', set));
		printf("src = >(null)<, ");
		printf("tri >%s<,\n", ft_strtrim((char *)((void *)0), set));
	}
	return (0);
}
