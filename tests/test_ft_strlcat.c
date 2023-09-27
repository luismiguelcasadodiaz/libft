/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/27 18:24:18 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
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

void	show_results(char *s, size_t s_len, char *d, size_t d_len, char *x)
{
	printf("concat src >%s< ", s);
	printf("(%ld) ", s_len);
	printf("into dst >%s< ", d);
	printf("(%ld) ", d_len);
	printf("=  >%s< . ", x);
	if (d_len < s_len)
		printf("Truncated YES.\n");
	else
		printf("Truncated  NO.\n");
}

int	main(int argc, char **argv)
{
	char	*src;
	char	*dst;
	char	*mybuf;
	char	*yobuf;
	size_t	buf_len;
	size_t	mybuf_len;
	size_t	yobuf_len;

	if (argc != 4)
		printf("Usage ./test_ft_strlcat dst src buf_len");
	else
	{
		src = argv[2];
		dst = argv[1];
		buf_len = (size_t)atoi(argv[3]);
		mybuf = (char *)malloc(buf_len);
		yobuf = (char *)malloc(buf_len);
		mybuf = strcpy(mybuf, dst);
		yobuf = strcpy(yobuf, dst);
		mybuf_len = ft_strlcat(mybuf, src, buf_len);
		yobuf_len = strlcat(yobuf, src, buf_len);
		show_results(src, ft_strlen(src), dst, ft_strlen(dst), mybuf);
		print_ok_ko(ft_memcmp(mybuf, yobuf, buf_len));
		free(mybuf);
		free(yobuf);
	}
	return (0);
}
