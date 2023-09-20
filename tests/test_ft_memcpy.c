/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:38:50 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 10:48:57 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	test(char *dst, char *src, size_t len)
{
	int		num;
	char	*mydst;
	char	*hisdst;

	num = ft_strlen(dst);
	printf("copy %zu bytes:", len);
	mydst = (char *)malloc(num * sizeof(char));
	mydst = strcpy(mydst, dst);
	printf("I >%s<,", ft_memcpy(mydst, src, len));
	free(mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	printf("he >%s<\n", memcpy(hisdst, src, len));
	free(hisdst);
}

void	test_null(char *dst, char *src, size_t len)
{
	char	*mydst;
	char	*hisdst;

	printf("copy %zu bytes ((void *)0):", len);
	mydst = dst;
	printf("I >%s<, ", ft_memcpy(mydst, src, len));
	hisdst = dst;
	printf("he >%s<\n", memcpy(hisdst, src, len));
}

int	main(void)
{
	test("Luis", "abcdefg", 0);
	test("Luis", "abcdefg", 1);
	test("Luis", "abcdefg", 2);
	test("Luis", "abcdefg", 3);
	test("Luis", "abcdefg", 4);
	test("Luis", "abcdefg", 5);
	test("Luis", "abcdefg", 8);
	test("Luis", "abcdefg", 9);
	test_null(((void *)0), ((void *)0), 3);
	return (0);
}
