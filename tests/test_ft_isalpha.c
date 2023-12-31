/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:48:00 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 14:48:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;

	c = 65;
	while (c <= 90)
	{
		printf(" %d, %d\n", c, (isalpha(c) != 0) && (ft_isalpha(c) != 0));
		c++;
	}
	c = 97;
	while (c <= 122)
	{
		printf(" %d, %d\n", c, (isalpha(c) != 0) && (ft_isalpha(c) != 0));
		c++;
	}
	return (0);
}
