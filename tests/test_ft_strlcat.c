/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 13:02:38 by luicasad         ###   ########.fr       */
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

void	show_results(char *s, size_t s_len, char *d, size_t d_len)
{
	printf("copy of src >%s< ", s);
	printf("with %ld chars ", s_len);
	printf("into dst >%s< ", d);
	printf("with %ld chars. ", d_len);
	if (d_len < s_len)
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
	char	*buf;
	size_t	buf_len;

	if (argc != 4)
		printf("Usage ./test_ft_strlcat dst src buf_len");
	else
	{
		src = argv[2];
		dst = argv[1];
		buf_len = (size_t)atoi(argv[3]);
		buf = (char *)malloc(buf_len);
		src_len = ft_strlcpy(buf, dst, buf_len -1);
		dst_len = ft_strlcat(buf, src, buf_len);
		show_results(src, src_len, buf, dst_len);
		free(buf);
	}
	return (0);
}
