/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:40:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/27 14:44:09 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	test(char *dst, const char *src, size_t len)
{
	int		num;
	char	*mydst;
	char	*hisdst;

	num = ft_strlen(dst);
	printf("copy %zu bytes:", len);
	mydst = (char *)malloc(num * sizeof(char));
	mydst = strcpy(mydst, dst);
	mydst = (char *)ft_memmove(mydst, src, len);
	printf("I >%s<,", mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	hisdst = (char *)memmove(hisdst, src, len);
	printf("he >%s<", hisdst);
	if (ft_memcmp(mydst, hisdst, len ) == 0)
		printf("\033[1;92m[OK]");
	else
		printf("\033[1;91m[KO]");
	printf("\033[0m\n");
	free(mydst);
	free(hisdst);
}

void	test_empty_dst(const char *src, size_t len)
{
	int		num;
	char	*mydst;
	char	*hisdst;
	char	*dst;

	dst = (char *)malloc(1 * sizeof(char));
	*dst = '\0';
	num = ft_strlen(dst);
	printf("copy %zu bytes over empty:", len);
	mydst = (char *)malloc(num * sizeof(char));
	mydst = strcpy(mydst, dst);
	printf("I >%s<,", (char *)ft_memmove(mydst, src, len));
	free(mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	printf("he >%s<\n", (char *)memmove(hisdst, src, len));
	free(hisdst);
}

void	test_empty_src(char *dst, size_t len)
{
	int		num;
	char	*mydst;
	char	*hisdst;
	char	*src;

	src = (char *)malloc(1 * sizeof(char));
	*src = '\0';
	num = ft_strlen(dst);
	printf("copy %zu bytes over empty:", len);
	mydst = (char *)malloc(num * sizeof(char));
	mydst = strcpy(mydst, dst);
	printf("I >%s<,", (char *)ft_memmove(mydst, src, len));
	free(mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	printf("he >%s<\n", (char *)memmove(hisdst, src, len));
	free(hisdst);
}

void	test_null_one(char *dst, const char *src, size_t len)
{
	char	*mydst;
	char	*hisdst;

	printf("copy %zu bytes over NULL:", len);
	mydst = dst;
	printf("I >%s<\n,", ft_memmove(mydst, src, len));
	hisdst = dst;
	printf("he >%s<, ", memmove(hisdst, src, len));
}

int	main(int argc, char **argv)
{	
	char	*src;
	char	*dst;
	size_t	len;
	if (argc != 4)
		printf("Usage ./test_ft_memmove dst src len");
	else
	{
		len = (size_t)ft_atoi(argv[3]);
		dst = argv[1];
		src = argv[2];
		test(dst, src, len);
		test(dst + 1, src, len);
		test(dst + 2, src, len);
		test(dst + 3, src, len);
		test(dst + 4, src, len);
	}
	return (0);
}
