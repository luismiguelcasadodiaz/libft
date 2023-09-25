/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 11:06:12 by luicasad         ###   ########.fr       */
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

void	show_results(char *s, size_t s_len, char* d, size_t d_len, int trunc)
{
	printf("copy of src >%s< ", s);
	printf("with %ld chars ", s_len);
	printf("into dst >%s< ", d);
	printf("with %ld chars. ", d_len);
	if (trunc)
		printf("Truncated YES.\n");
	else
		printf("Truncated  NO.\n");
}

int	main(int argc, char **argv)
{
	char	*src;
	size_t	src_len;
	char	*dst;
	size_t	dst_len;

	if (argc != 3)
		printf("Usage ./test_ft_strlcpy src dst_len");
	else
	{
		src = argv[1];
		dst_len = (size_t)atoi(argv[2]);
		dst = (char *)malloc(dst_len + 1);
		src_len = 0;
		while (src_len < dst_len)
			dst[src_len++] = 'a';
		src_len = ft_strlcpy(dst, src, dst_len);
		show_results(src, src_len, dst , dst_len, dst_len < src_len);
		free(dst);
	}
return (0);
}
