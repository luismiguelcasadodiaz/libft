/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:48:59 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 14:49:21 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	c;

	c = 48;
	while (c <= 58)
	{
		printf(" %d, %d\n", c, (isdigit(c) != 0) && (ft_isdigit(c) != 0));
		c++;
	}
	return (0);
}
