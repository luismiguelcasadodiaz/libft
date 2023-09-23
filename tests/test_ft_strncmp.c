/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:19:56 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/23 21:28:41 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	test(char *s1, char *s2, size_t len)
{
	int	mine;
	int	your;

	mine = ft_strncmp(s1, s2, len);
	your = strncmp(s1, s2, len);
	printf("compares >%s< wiht >%s< in the ", s1, s2);
	printf("the firsts %zu bytes:", len);
	printf("he >%d<,", your);
	printf("I  >%d<", mine);
	if (mine == your)
		printf("\033[1;92m[OK]");
	else
		printf("\033[1;91m[KO]");
	printf("\033[0m\n");
}

int	main(void)
{
	test("A2CDE2GHIJ", "A1CDE1GHIJ", 0);
	test("A2CDE2GHIJ", "A1CDE1GHIJ", 1);
	test("A2CDE2GHIJ", "A1CDE1GHIJ", 2);
	test("A2CDE2GHIJ", "A1CDE1GHIJ", 3);
	test("A1CDE2GHIJ", "A1CDE1GHIJ", 3);
	test("A1CDE2GHIJ", "A1CDE1GHIJ", 4);
	test("A1CDE2GHIJ", "A1CDE1GHIJ", 5);
	test("A1CDE2GHIJ", "A1CDE1GHIJ", 6);
	test("A1CDE2GHIJ", "A1CDE1GHIJ", 7);
	test("A1CDE2GHIJ", "A1CDE1GHIJ", 8);
	test("A2CDE2GHIJ", "A2CDE1GHIJ", 5);
	test("A2CDE2GHIJ", "A2CDE1GHIJ", 6);
	test("A2CDE2GHIJ", "A2CDE1GHIJ", 7);
	test("A2CDE2GHIJ", "A2CDE1GHIJ", 8);
	test("", "A2CDE1GHIJ", 8);
	test("A2CDE1GHIJ", "", 8);
	return (0);
}
//printf(" c, len), memchr(text, c, len), 10)? "\033[1;91mKO": "\033[1;92mOK");
//printf("\033[0m\n");
