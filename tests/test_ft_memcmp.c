/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:19:56 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 17:48:40 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	test(char *s1, char *s2, size_t len)
{
	printf("compares >%s< wiht >%s< in the ", s1, s2);
	printf("the firsts %zu bytes:", len);
	printf("I >%d<,", ft_memcmp(s1, s2, len));
	printf("he >%d<\n", memcmp(s1, s2, len));
}

int	main(void)
{
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 0);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 1);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 2);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 3);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 4);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 5);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 6);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 7);
	test("ABCDE2GHIJ", "ABCDE1GHIJ", 8);
	test(NULL, "ABCDE1GHIJ", 8);
	return (0);
}
//printf(" c, len), memchr(text, c, len), 10)? "\033[1;91mKO": "\033[1;92mOK");
//printf("\033[0m\n");
