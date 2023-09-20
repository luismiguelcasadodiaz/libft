/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:39:37 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 09:39:37 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	test(char *text, int c, size_t len)
{
	int		num;
	char	*mytext;
	char	*histext;

	printf("set %zu bytes:", len);
	num = ft_strlen(text);
	mytext = (char *)malloc(num * sizeof(char));
	mytext = strcpy(mytext, text);
	printf("I >%s<,", (char *)ft_memset(mytext, c, len));
	free(mytext);
	histext = (char *)malloc(num * sizeof(char));
	histext = strcpy(histext, text);
	printf("he >%s<\n", (char *)memset(histext, c, len));
	free(histext);
}

void	test_num(int c, size_t len)
{
	int		mynum;
	int		hisnum;

	mynum = 2147111111;
	hisnum = 2147111111;
	printf("set %zu bytes:", len);
	printf("I  >%d<,",*(int *)ft_memset(&mynum, c, len));
	printf("he >%d<\n",*(int *)memset(&hisnum, c, len));
}

int	main(void)
{
	test("Luis", 65, 0);
	test("Luis", 65, 1);
	test("Luis", 65, 2);
	test("Luis", 65, 3);
	test("Luis", 65, 4);
	test("Luis", 65, 5);
	test("Luis", 65, 8);
	test_num(0, 0);
	test_num(0, 1);
	test_num(0, 2);
	test_num(0, 3);
	test_num(0, 4);
	return (0);
}
