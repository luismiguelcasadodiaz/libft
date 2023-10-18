/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/17 18:44:10 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	print_ok_ko(size_t comp)
{
	if (comp == 0)
		printf("\033[1;92m[OK]");
	else
		printf("\033[1;91m[KO]");
	printf("\033[0m\n");
}

void	show_size(void)
{
	size_t	size;

	printf("SIZE_MAX = %lu\n ", SIZE_MAX);
	size = sizeof(SIZE_MAX);
	printf("size = %zu\n ", size);
}

void	show_results(char *mine, char *your, size_t n, size_t s)
{
	size_t	comp;

	comp = ft_memcmp(mine, your, n * s);
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
		your = (char *)calloc(n, s);
		if (your == NULL)
			printf(" calloc can not %lu * %lu\n", n, s);
		mine = (char *)ft_calloc(n, s);
		if (your == NULL)
			printf(" ft_calloc can not %lu * %lu\n", n, s);
		show_results(mine, your, n, s);
		show_size();
	}
	return (0);
}
