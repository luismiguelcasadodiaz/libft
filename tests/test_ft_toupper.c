/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:16:28 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/22 20:22:26 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

void	test(int i)
{
	int	mine;
	int	its;

	mine = ft_toupper(i);
	its = toupper(i);
	printf("%d,", i);
	printf(" my l >%d< - his l >%d< diff=%d\n", mine, its, mine - its);
	return ;
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 130)
	{
		test(i);
		i++;
	}
	test(EOF);
	return (0);
}
