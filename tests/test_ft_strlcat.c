/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/10 10:42:23 by luicasad         ###   ########.fr       */
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

void	test(char *src, char *dst, size_t buf_len)
{
	char	*mybuf;
	char	*yobuf;
	size_t	mybuf_len;
	size_t	yobuf_len;

	mybuf = (char *)malloc(buf_len);
	yobuf = (char *)malloc(buf_len);
	mybuf = strcpy(mybuf, dst);
	yobuf = strcpy(yobuf, dst);
	mybuf_len = ft_strlcat(mybuf, src, buf_len);
	yobuf_len = strlcat(yobuf, src, buf_len);
	printf("concat src >%s< ", src);
	printf("(%ld) ", ft_strlen(src));
	printf("into dst >%s< ", dst);
	printf("(%ld) ", ft_strlen(dst));
	printf("=  >%s< . ", mybuf);
	if (ft_strlen(dst) < ft_strlen(src))
		printf("Truncated YES.\n");
	else
		printf("Truncated  NO.\n");
	print_ok_ko(ft_memcmp(mybuf, yobuf, buf_len));
	free(mybuf);
	free(yobuf);
}

int	main(int argc, char **argv)
{
	char	*src;
	char	*dst;
	size_t	buf_len;

	if (argc != 4)
		printf("Usage ./test_ft_strlcat dst src buf_len");
	else
	{
		src = argv[2];
		dst = argv[1];
		buf_len = (size_t)atoi(argv[3]);
		test(src, dst, buf_len);
	}
	return (0);
}
