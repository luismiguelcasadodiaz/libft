/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:37:18 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/02 15:52:04 by luicasad         ###   ########.fr       */
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

void	show_words(char	**words)
{
		size_t	i;

		i = 0;
		while (words[i] == NULL)
			printf(">%s<\n", words[i++]);
}
int	main(int argc, char **argv)
{
	char			*src;
	char			*set;
	char			**result;

	if (argc != 3)
		printf("Usage ./test_ft_split str set");
	else
	{
		src = argv[1];
		set = argv[2];
		printf("src = >%s<, ", src);
		printf("set = >%s<,\n", set);
		result = ft_split(src, *set);
		free(result);
	}
	return (0);
}
