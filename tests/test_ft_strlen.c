/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:11:26 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 20:21:31 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

void	test(const char s[])
{
	/*printf("I  %lu, he %lu for string >%s<\n", ft_strlen(s), strlen(s), s);*/
	ft_strlen(s);
}

int	main(void)
{
	int	i;
	
	i = 0;
	while (i++ < 100000000)
		test("Luis Miguel Casado Diaz esta buscando la forma mas eficiente ");
	return (0);
}
