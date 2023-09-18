/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:11:26 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/18 20:28:14 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

void	test(void *b, int c, size_t len)
{
	printf("I  >%s<,", (char *)ft_memset(b, c, len));
	printf("he >%s<\n", (char *)memset(b, c, len));
}

void	test_num(void *b, int c, size_t len)
{
	printf("I  >%d<,",*(int *)ft_memset(b, c, len));
	printf("he >%d<\n",*(int *)memset(b, c, len));
}

int	main(void)
{
	char	text;
	int		num;
	char	*text2;

	text = (char *)malloc(5 * sizeof(char));
	text = strcpy(text, "Luis\0");
	test(text, 65, 0);
	test(text, 65, 1);
	test(text, 65, 2);
	test(text, 65, 3);
	test(text, 65, 4);
	test(text, 65, 5);
	test(text, 65, 8);
	text2 = (char *)malloc(1 * sizeof(char));
	text2 = strcpy(text2, "");
	test(text2, 97, 1);
	free(text);
	free(text2);
	num = 2147111111;
	test_num(&num, 0, 0);
	test_num(&num, 0, 1);
	test_num(&num, 0, 2);
	test_num(&num, 0, 3);
	test_num(&num, 0, 4);
	return (0);
}
