/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:19:56 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 13:45:09 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	test(char *text, int c, size_t len)
{
	printf("chech if %c is in the firsts %zu bytes of >%s<:", (unsigned char) c, len, text);
	printf("I >%s<,", (char *)ft_memchr(text, c, len));
	printf("he >%s<\n", (char *)memchr(text, c, len));
	//printf("==> %s", memcmp(ft_memchr(text, c, len), memchr(text, c, len), 10)? "\033[1;91mKO": "\033[1;92mOK");
	//printf("\033[0m\n");
}

int	main(void)
{
	test("ABCDE2GHIJ", 50, 0);
	test("ABCDE2GHIJ", 50, 1);
	test("ABCDE2GHIJ", 50, 2);
	test("ABCDE2GHIJ", 50, 3);
	test("ABCDE2GHIJ", 50, 4);
	test("ABCDE2GHIJ", 50, 5);
	test("ABCDE2GHIJ", 50, 6);
	test("ABCDE2GHIJ", 50, 7);
	test("ABCDE2GHIJ", 50, 8);
	test("ABCDE2GHIJ", '\0', 8);
	test("", 65, 8);
	return (0);
}
