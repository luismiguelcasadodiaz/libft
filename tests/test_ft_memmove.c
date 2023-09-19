/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:40:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/19 19:43:57 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

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
	printf("I >%s<,", (char *)ft_memmove(mydst, src, len));
	free(mydst);
	hisdst = (char *)malloc(num * sizeof(char));
	hisdst = strcpy(hisdst, dst);
	printf("he >%s<\n", (char *)memmove(hisdst, src, len));
	free(hisdst);
}

int	main(void)
{

	test("Luis","Miguel", 0);
	test("Luis","Miguel", 1);
	test("Luis","Miguel", 2);
	test("Luis","Miguel", 3);
	test("Luis","Miguel", 4);
	test("Luis","Miguel", 5);
	test("Luis","Miguel", 8);
	test("Luis","Miguel", 9);
	test("Miguel", "Luis", 0);
	test("Miguel", "Luis", 1);
	test("Miguel", "Luis", 2);
	test("Miguel", "Luis", 3);
	test("Miguel", "Luis", 4);
	test("Miguel", "Luis", 5);
	test("Miguel", "Luis", 8);
	test("Miguel", "Luis", 9);
	return (0);
}
