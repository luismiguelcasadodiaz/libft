/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:37:18 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/12 12:10:16 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

char	**test_empty(void)
{
	char			*src;
	char			*set;
	int				src_len;
	int				set_len;

	src = (char *)malloc(sizeof(char));
	set = (char *)malloc(sizeof(char));
	src_len = ft_strlcpy(src, "", 1);
	set_len = ft_strlcpy(set, "", 1);
	if (src_len || set_len)
		printf(" ");
	return (ft_split(src, *set));
}

char	**test_paco(void)
{
	return (ft_split("\0aa\0bbb", '\0'));
}

void	show_words(char	**words)
{
	size_t	i;

	if (words)
	{
		i = 0;
		while (words[i] != NULL)
			printf(">%s<\n", words[i++]);
	}
	else
		printf("Nothing to print\n");
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
		show_words(result);
		free(result);
		//result = test_paco();
		//show_words(result);
		//free(result);
	}
	return (0);
}
