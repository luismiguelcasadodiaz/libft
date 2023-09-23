/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/23 19:23:11 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char			*src;

	if (argc != 2)
		printf("Usage ./test_ft_strtrim str");
	else
	{
		src = argv[1];
		printf("src = >%s<, ", src);
		printf("int >%s<\n", ft_strtrim(src));
		printf("src = >\\0<, ");
		printf("int >%s<,\n", ft_strtrim((char *) '\0'));
		printf("src = >(null)<, ");
		printf("int >%s<,\n", ft_strtrim((char *)((void *)0)));
	}
	return (0);
}
