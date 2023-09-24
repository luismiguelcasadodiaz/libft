/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/24 14:10:04 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	print_ok_ko(size_t comp)
{
	if ((comp == 0))
		printf("\033[1;92m[OK]");
	else
		printf("\033[1;91m[KO]");
	printf("\033[0m\n");
}

void	show_results(char *src, char *mine, char *your)
{
	int		comp;
	size_t	len;

	len = ft_strlen(src);
	comp = ft_memcmp(mine, your, len + 1);
	printf("src >%s<, mine >%s<, your >%s<", src, mine, your);
	print_ok_ko(comp);
}

int	main(int argc, char **argv)
{
	char	*mine;
	char	*your;
	char	*src;

	if (argc != 2)
		printf("Usage ./test_ft_strdup src");
	else
	{
		src = argv[1];
		mine = ft_strdup(src);
		your = strdup(src);
		show_results(src, mine, your);
	}
	return (0);
}
