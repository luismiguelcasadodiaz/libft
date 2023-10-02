/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/02 11:15:39 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

char	*test_empty(void)
{
	char			*src;
	char			*set;
	int				src_len;
	int				set_len;

	src = (char *)malloc(sizeof(char));
	set = (char *)malloc(sizeof(char));
	src_len = ft_strlcpy(src, "", 1);
	set_len = ft_strlcpy(set, "", 1);
	return (ft_strtrim(src, set));
}

int	main(int argc, char **argv)
{
	char			*src;
	char			*set;
	char			*result;

	if (argc != 3)
		printf("Usage ./test_ft_strtrim str set");
	else
	{
		src = argv[1];
		set = argv[2];
		printf("src = >%s<, ", src);
		printf("set = >%s<, ", set);
		result = ft_strtrim(src, set);
		printf("tri >%s<\n", result);
		free(result);
		printf("src = >\\0<, ");
		result = test_empty();
		printf("tri >%s<,\n", result);
		free(result);
	}
	return (0);
}
