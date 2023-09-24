/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/24 12:59:30 by luicasad         ###   ########.fr       */
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

void	show_results(char *mine, char *your, size_t n, size_t s)
{
	size_t	comp;

	if (n != 0 && s != 0)
	{
		comp = (INT_MAX / s);
		if ((n >= comp) && ((comp * s) < INT_MAX))
		{
			printf("%ld %ld integer Overflow ", n, s);
			comp = !(mine == your);
		}
		else
		{
			printf("%ld %ld %ld ", n, s, n * s);
			comp = ft_memcmp(mine, your, n * s);
		}
	}
	else
	{
		printf("%ld %ld %ld ", n, s, n * s);
		comp = ft_memcmp(mine, your, n * s);
	}
	printf("mine >%s<, your >%s<", mine, your);
	print_ok_ko(comp);
}

int	main(int argc, char **argv)
{
	char	*mine;
	char	*your;
	size_t	n;
	size_t	s;

	if (argc != 3)
		printf("Usage ./test_ft_calloc n size");
	else
	{
		n = atoi(argv[1]);
		s = atoi(argv[2]);
		mine = (char *)ft_calloc(n, s);
		your = (char *)calloc(n, s);
		show_results(mine, your, n, s);
	}
	return (0);
}
