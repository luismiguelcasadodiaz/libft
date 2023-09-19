/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:40:01 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/19 19:40:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *b, size_t len);

void	test(char *text,  size_t len)
{
	char	*mytext;
	int		num;
	char	*histext;

	printf("set %zu bytes ", len);
	num = 0;
	while (text[num] != '\0')
	   num++;
	mytext = (char *)malloc(num * sizeof(char));
	mytext = strcpy(mytext, text);
	histext = (char *)malloc(num * sizeof(char));
	histext = strcpy(histext, text);
	printf("to %s: ", mytext);
	ft_bzero(mytext, len);
    printf("I  >%s<, ", mytext);
	free(mytext);
	bzero(histext, len);
	printf("he >%s<\n", histext);
    free(histext);
}

void	test_num(size_t n)
{
	int		mynum;
	int		hisnum;
	
	mynum = 2147111111;
	hisnum = 2147111111;
	printf("set %zu bytes: ",n);
	ft_bzero(&mynum, n);
	printf("I  >%d<, ", mynum);
	bzero(&hisnum, n);
	printf("he >%d<\n",hisnum);
}

int	main(void)
{
	test("Luis",0);
	test("Luis",1);
	test("Luis",2);
	test("Luis",3);
	test("Luis",4);
	test("Luis",5);
	test("Luis",8);
	test_num(0);
	test_num(1);
	test_num(2);
	test_num(3);
	test_num(4);
	return (0);
}
