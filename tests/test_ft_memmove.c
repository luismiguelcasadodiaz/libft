/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:40:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 14:05:08 by luicasad         ###   ########.fr       */
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
	printf("I >%s<,", (char *)ft_memmove(mydst, src, len));
	free(mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	printf("he >%s<\n", (char *)memmove(hisdst, src, len));
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

int	main(void)
{
	test("Luis", "Miguel", 0);
	test("Luis", "Miguel", 1);
	test("Luis", "Miguel", 2);
	test("Luis", "Miguel", 3);
	test("Luis", "Miguel", 4);
	test("Luis", "Miguel", 5);
	test("Luis", "Miguel", 6);
	test("Luis", "Miguel", 7);
	test("Luis", "Miguel", 8);
	test("Miguel", "Luis", 0);
	test("Miguel", "Luis", 1);
	test("Miguel", "Luis", 2);
	test("Miguel", "Luis", 3);
	test("Miguel", "Luis", 4);
	test("Miguel", "Luis", 5);
	test("Miguel", "Luis", 6);
	test("Miguel", "Luis", 7);
	test("Miguel", "Luis", 8);
	test_empty_dst("Luis", 0);
	test_empty_dst("Luis", 1);
	test_empty_dst("Luis", 2);
	test_empty_dst("Luis", 3);
	test_empty_dst("Luis", 4);
	test_empty_dst("Luis", 5);
	test_empty_dst("Luis", 6);
	test_empty_src("Miguel", 0);
	test_empty_src("Miguel", 1);
	test_empty_src("Miguel", 2);
	test_empty_src("Miguel", 3);
	test_empty_src("Miguel", 4);
	test_empty_src("Miguel", 5);
	test_empty_src("Miguel", 6);
	test_null_one(((void *)0), "Luis", 0);
	test_null_one(((void *)0), "Luis", 1);
	test_null_one(((void *)0), "Luis", 2);
	test_null_one(((void *)0), "Luis", 3);
	test_null_one(((void *)0), "Luis", 4);
	test_null_one(((void *)0), "Luis", 5);
	test_null_one(((void *)0), "Luis", 6);
	return (0);
}
