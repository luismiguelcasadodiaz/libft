/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:38:50 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/19 19:39:02 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	test(char *dst, char * src, size_t len)
{
	int		num;
	char	*mydst;
	char	*hisdst;
	
	num = 0;
	while (dst[num] != '\0')
		num++;
	printf("copy %zu bytes:", len);
	mydst = (char *)malloc(num * sizeof(char));
	mydst = strcpy(mydst, dst);
	printf("I >%s<,", (char *)ft_memcpy(mydst, src, len));
	free(mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	printf("he >%s<\n", (char *)memcpy(hisdst, src, len));
	free(hisdst);
}

int	main(void)
{

	test("Luis","abcdefg", 0);
	test("Luis","abcdefg", 1);
	test("Luis","abcdefg", 2);
	test("Luis","abcdefg", 3);
	test("Luis","abcdefg", 4);
	test("Luis","abcdefg", 5);
	test("Luis","abcdefg", 8);
	test("Luis","abcdefg", 9);
	return (0);
}
