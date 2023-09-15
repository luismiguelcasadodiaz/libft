/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:11:26 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 19:32:20 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

void	test(const char s[])
{
	size_t	n;

	if (s == NULL)
	{
		n = ft_strlen(s);
		printf("I say %lu", n);
		printf(", he says %lu for string >%s<\n", strlen(s), "NULL");
	}
	else
		printf("I  %lu, he %lu for string >%s<\n", ft_strlen(s), strlen(s), s);
}

int	main(void)
{
	test("L");
	test("Lu");
	test("");
	test("\0");
	test(NULL);
	return (0);
}
