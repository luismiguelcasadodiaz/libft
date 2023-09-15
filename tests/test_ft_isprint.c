/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:49:30 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 14:49:38 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	int	c;

	c = 32;
	while (c <= 126)
	{
		printf(" %d, %d\n", c, (isprint(c) != 0) && (ft_isprint(c) != 0));
		c++;
	}
	return (0);
}
