/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:48:18 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 14:48:48 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int	c;

	c = 0;
	while (c <= 127)
	{
		printf(" %d, %d\n", c, (isascii(c) != 0) && (ft_isascii(c) != 0));
		c++;
	}
	return (0);
}
