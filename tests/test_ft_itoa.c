/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:30:42 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/09 09:53:09 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	int		num;
	char	*str;

	if (argc != 2)
		printf("Usage ./test_ft_itoa num");
	else
	{
		num = (size_t)ft_atoi(argv[1]);
		printf("str = >%d<, ", num);
		str = ft_itoa(num);
		printf("substr >%s<\n", str);
		printf("str = >0<, ");
		printf("substr >%s<\n", ft_itoa(0));
		printf("str = >%d<, ", INT_MIN);
		printf("substr >%s<\n", ft_itoa(INT_MIN));
	}
	return (0);
}
