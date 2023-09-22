/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:16:28 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/22 17:28:43 by luicasad         ###   ########.fr       */
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

	mine = ft_tolower(i);
	its = tolower(i);
	printf("%d,", i);
	printf(" my l >%d< - his l >%d< diff=%d\n", mine, its, mine - its);
	return ;
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 512)
	{
		test(i);
		i++;
	}
	test(EOF);
	return (0);
}
